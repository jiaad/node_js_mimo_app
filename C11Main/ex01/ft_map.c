/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 01:15:02 by daye              #+#    #+#             */
/*   Updated: 2019/07/24 23:59:05 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*res;

	i = 0;
	res = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		res[i] = (*f)(tab[i]);
		i++;
	}
	return (res);
}

int ft_test(int r)
{
	return (r+1);
}
int main()
{
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_map(tab, 10, &ft_test);
	int i = 0;
	while (i < 10)
	{
		printf("%d", *ft_map(&tab[i], 10, &ft_test));
		i++;
	}
	return (0);
}
