/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 11:15:39 by home              #+#    #+#             */
/*   Updated: 2021/03/15 15:12:45 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	make_py_file(int prob_id)
{
	char	*curl_cmd;

	asprintf(&curl_cmd, "curl --cookie ~/codingbat_cookies.txt -o temp/html.html \"https://codingbat.com/prob/p%d\"", prob_id);
	system(curl_cmd);

	char	*html;
	char	*name;
	char	*code_block;
	char	*code_block_end;

	html = extract_file("temp/html.html");
	name = strstr(html, TITLE) + strlen(TITLE);


	html = strstr(html, CODE_FORM_START);
	html += strlen(CODE_FORM_START);
	code_block_end = strstr(html, CODE_FORM_END);

	code_block = strndup(html, code_block_end - html);
	printf("%s\n", code_block);


	strchr(name, '<')[0] = '\0';
	asprintf(&name, DST_DIR"%s.py", name);
	FILE *py_file = fopen(name, "w");
	fprintf(py_file, "%s", code_block);
	fclose(py_file);

	char	*sed_cmd;

	asprintf(&sed_cmd, "sed -i '' -e \"s/&lt;/</g\" \"%s\"", name);
	system(sed_cmd);
	asprintf(&sed_cmd, "sed -i '' -e \"s/&gt;/>/g\" \"%s\"", name);
	system(sed_cmd);
}

int	main(void)
{
	int		prob_id;
	char	*config_id;

	system("mkdir -p "DST_DIR);
	system("mkdir -p temp");
	config_id = extract_file("config/problem_ids");
	while (config_id[0] != '\0')
	{
		config_id += fetch_int(config_id, &prob_id) + 1;
		printf("ID %d\n", prob_id);
		make_py_file(prob_id);
	}
	remove("temp/html.html");
	remove("temp/");

	return (0);
}