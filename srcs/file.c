/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 11:22:00 by home              #+#    #+#             */
/*   Updated: 2020/11/14 11:33:22 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*extract_file(char *file)
{
	char	*str;
	FILE	*fh = fopen(file, "r");

	fseek(fh, 0L, SEEK_END);
	long	l = ftell(fh);

	str = calloc(l + 1, 1), rewind(fh);
	fread(str, l, 1, fh);
	fclose(fh);
	return (str);
}

int	fetch_int(char *src, int *dest)
{
	char	*ptr = src;
	ptr += strcspn(ptr, DIGITS);
	*dest = atoi(ptr);
	ptr += strspn(ptr, DIGITS);

	return (ptr - src);
}