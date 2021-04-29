/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:11:21 by kzennoun          #+#    #+#             */
/*   Updated: 2021/04/29 13:01:43 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

typedef struct s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

size_t  ft_strlen(const char *s);
char *  ft_strcpy(char * dst, const char * src);
int     ft_strcmp(const char *s1, const char *s2);
ssize_t ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t ft_read(int fildes, void *buf, size_t nbyte);
char *  ft_strdup(const char *s1);


t_list*	ft_create_elem(void* data);
void	ft_list_push_front(t_list **begin_list,void*data);
// ft_list_push_front (Comme celui de piscine)
// ft_list_size (Comme celui de piscine)
// ft_list_sort (Comme celui de piscine)
// ft_list_remove_if (Comme celui de piscine
// ft_atoi_base (Comme celui de piscine)