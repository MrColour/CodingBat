/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 11:16:06 by home              #+#    #+#             */
/*   Updated: 2021/03/15 14:48:03 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/stat.h>

#define DIGITS "0123456789-"

#define DST_DIR "out/"

#define CODE_FORM_START "<form name=codeform><div id='ace_div'>"
#define CODE_FORM_END "</div>"

#define TITLE "<title>"

char	*extract_file(char *file);
int		fetch_int(char *src, int *dest);

#endif