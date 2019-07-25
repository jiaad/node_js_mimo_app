/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:58:17 by wpark             #+#    #+#             */
/*   Updated: 2019/07/14 21:53:39 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <stdio.h>

extern	int		g_size;
extern	char	****g_poss;

void	make_row_empty(int tab[g_size][g_size], int row);

int		verify_input(char *str);

int		init(int row_ab[g_size][2], int col_ab[g_size][2], char *str)
{
	int cnt;

	cnt = 0;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= ('0' + g_size))
		{
			if (cnt < g_size)
				col_ab[cnt % g_size][0] = *str - '1';
			else if (cnt < g_size * 2)
				col_ab[cnt % g_size][1] = *str - '1';
			else if (cnt < g_size * 3)
				row_ab[cnt % g_size][0] = *str - '1';
			else
				row_ab[cnt % g_size][1] = *str - '1';
			cnt++;
		}
		else if (*str > ('0' + g_size))
			return (0);
		str++;
	}
	if (cnt != g_size * 4)
		return (0);
	return (1);
}

void	start_it(char *str)
{
	int	row_ab[g_size][2];
	int	col_ab[g_size][2];
	int	tab[g_size][g_size];
	int i;

	i = 0;
	if (init(row_ab, col_ab, str))
	{
		g_poss = precalcul(g_size, ft_recursive_factorial(g_size - 1) +
				ft_recursive_factorial(g_size - 2));
		i = 0;
		while (i < g_size)
			make_row_empty(tab, i++);
		deep_find_search(tab, row_ab, col_ab, 0);
	}
	else
		write(1, "Error\n", 6);
	i = 0;
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		g_size = verify_input(av[1]);
		if (g_size < 3)
			write(1, "Error\n", 6);
		start_it(av[1]);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
