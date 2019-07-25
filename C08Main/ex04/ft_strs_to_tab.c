/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:15:20 by daye              #+#    #+#             */
/*   Updated: 2019/07/24 18:17:35 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int							ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char						*ft_strdup(char *src)
{
	int					i;
	int					j;
	char				*dest;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc(sizeof(*dest) * (i + 1));
	if (!dest)
		return (NULL);
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

struct s_stock_str			*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str		*ptr;
	int						i;

	i = 0;
	if (!av)
		return (NULL);
	ptr = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!ptr)
		return (NULL);
	while (i < ac)
	{
		ptr[i].size = ft_strlen(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = ft_strdup(av[i]);
		i++;
	}
	ptr[i].str = NULL;
	return (ptr);
}
