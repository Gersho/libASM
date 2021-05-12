/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:14:57 by kzennoun          #+#    #+#             */
/*   Updated: 2021/05/12 11:41:48 by kzennoun         ###   ########lyon.fr   */
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

int main(void)
{
	t_list	lst[4];
	t_list	*start;
	int		a = 1;
	int		b = 2;
	char	ca [] = "bbb";
	char	cb [] = "ccc";
	char	cc [] = "ddd";
	char	cd [] = "aaa";
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
	printf("ret ___write: %zu\n",write(1, "Hello, World\n", 13));

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
	printf("___strdup: %s\n\n", dstdup_real);
	free(dstdup_ft);
	free(dstdup_real);



	printf("---- testing list_size ----\n");
	lst[0].next = NULL;
	lst[1].next = NULL;
	lst[2].next = NULL;
	lst[3].next = NULL;
	printf("ft_list_size(NULL):%d\n", ft_list_size(NULL));
	printf("1 elem in list:%d\n", ft_list_size(lst));
	lst[0].next = &lst[1];
	printf("2 elem in list:%d\n", ft_list_size(lst));
	lst[1].next = &lst[2];
	printf("3 elem in list:%d\n", ft_list_size(lst));
	lst[2].next = &lst[3];
	printf("4 elem in list:%d\n\n", ft_list_size(lst));


	printf("---- testing list_push_front ----\n");
	start = &lst[0];
	lst->data = &a;
	printf("print first element before push front: %d\n", *(int*)start->data);
	ft_list_push_front(&start, &b);
	printf("print first element after push front: %d\n\n", *(int*)start->data);	




	printf("---- testing list_sort ----\n");
	lst[0].next = &lst[1];
	lst[1].next = &lst[2];
	lst[2].next = &lst[3];
	lst[3].next = NULL;
	start = &lst[0];
	lst[0].data = &ca;
	lst[1].data = &cb;
	lst[2].data = &cc;
	lst[3].data = &cd;
	printf("before sorting\n");
	while(start)
	{
		printf("%s ,", (char*)start->data);
		start = start->next;
	}
	printf("\n");
	start = &lst[0];
	ft_list_sort(&start, strcmp);
	printf("after sorting\n");
	while(start)
	{
		printf("%s ,", (char*)start->data);
		start = start->next;
	}
	printf("\n");
}