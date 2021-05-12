/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 12:29:26 by kzennoun          #+#    #+#             */
/*   Updated: 2021/05/12 11:41:19 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{

	char 	test[7] = "blabla\0";
	char	src[6] = "Hello\0";
	char	dst_ft[9] = "01234567\0";
	char	dst_real[9] = "01234567\0";
	int		fd;
	char	str[25];
	char	*dstdup_ft;
	char	*dstdup_real;


	printf("---- testing strlen ----\n");
	printf("ft_strlen: %zu\n", ft_strlen(test));
	printf("___strlen: %zu\n\n", strlen(test));

	printf("---- testing strcpy ----\n");
	ft_strcpy(dst_ft, src);
	printf("ft_strcpy: %s\n", dst_ft);
	strcpy(dst_real, src);
	printf("___strcpy: %s\n\n", dst_real);

	printf("---- testing strcmp ----\n");
	printf("ft_strcmp: %d\n", ft_strcmp(dst_ft, src));
	printf("___strcmp: %d\n", strcmp(dst_ft, src));
	printf("----\n");
	printf("ft_strcmp: %d\n", ft_strcmp(test, src));
	printf("___strcmp: %d\n", strcmp(test, src));
	printf("----\n");
	printf("ft_strcmp: %d\n", ft_strcmp("", ""));
	printf("___strcmp: %d\n\n", strcmp("", ""));

	printf("---- testing write ----\n");
	printf("ret ft_write: %zu\n",ft_write(1, "Hello, World\n", 13));
	printf("ret ___write: %zu\n\n",write(1, "Hello, World\n", 13));

	printf("---- testing read ----\n");
	fd = open("ft_strlen.s", O_RDONLY);
	ft_read(fd, str, 13);
	str[13] = 0;
	printf("ft_read:%s\n", str);
	close(fd);
	fd = open("ft_strlen.s", O_RDONLY);
	read(fd, str, 13);
	str[13] = 0;
	printf("___read:%s\n", str);
	printf("----\n");

	fd = open("Makefile", O_RDONLY);
	ft_read(fd, str, 15);
	str[15] = 0;
	printf("ft_read:%s\n", str);
	close(fd);
	fd = open("Makefile", O_RDONLY);
	read(fd, str, 15);
	str[15] = 0;
	printf("___read:%s\n\n", str);
	close(fd);


	printf("---- testing strdup ----\n");
	dstdup_ft = ft_strdup(src);
	printf("ft_strdup: %s\n", dstdup_ft);
	dstdup_real = strdup(src);
	printf("___strdup: %s\n", dstdup_real);
	free(dstdup_ft);
	free(dstdup_real);
	return (0);
}
