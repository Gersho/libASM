/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 12:29:26 by kzennoun          #+#    #+#             */
/*   Updated: 2021/04/26 15:46:12 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <errno.h>

int	main(void)
{
	char 	test[7] = "blabla\0";
	char	src[6] = "Hello\0";
	char	dst_ft[9] = "01234567\0";
	char	dst_real[9] = "01234567\0";

	printf("---- testing strlen ----\n");
	printf("ft_strlen: %zu\n", ft_strlen(test));
	printf("strlen: %zu\n", strlen(test));

	printf("---- testing strcpy ----\n");
	ft_strcpy(dst_ft, src);
	printf("ft_strcpy: %s\n", dst_ft);
	strcpy(dst_real, src);
	printf("real strcpy: %s\n", dst_real);

	printf("---- testing strcmp ----\n");
	printf("ft_strcmp: %d\n", ft_strcmp(dst_ft, src));
	printf("real strcmp: %d\n", strcmp(dst_ft, src));
	printf("----\n");
	printf("ft_strcmp: %d\n", ft_strcmp(test, src));
	printf("real strcmp: %d\n", strcmp(test, src));

	printf("---- testing write ----\n");
	ft_write(1, "Hello, World\n", 13);


	printf("still alive: end of main\n");
	return (0);
}