/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:11:21 by kzennoun          #+#    #+#             */
/*   Updated: 2021/04/26 17:00:04 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

size_t  ft_strlen(const char *s);
char *  ft_strcpy(char * dst, const char * src);
int     ft_strcmp(const char *s1, const char *s2);
ssize_t ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t ft_read(int fildes, void *buf, size_t nbyte);
//char *  ft_strdup(const char *s1);

// ft_strlen (man 3 strlen)
// ft_strcpy (man 3 strcpy)
// ft_strcmp (man 3 strcmp)
// ft_write (man 2 write)
// ft_read (man 2 read)
// ft_strdup (man 3 strdup, malloc autorisé)