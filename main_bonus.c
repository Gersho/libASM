/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:14:57 by kzennoun          #+#    #+#             */
/*   Updated: 2021/05/05 15:14:52 by kzennoun         ###   ########lyon.fr   */
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
	printf("4 elem in list:%d\n", ft_list_size(lst));


	printf("---- testing list_push_front ----\n");
	start = &lst[0];
	lst->data = &a;
	printf("print first element before push front: %d\n", *(int*)start->data);
	ft_list_push_front(&start, &b);
	printf("print first element after push front: %d\n", *(int*)start->data);	




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