/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deep_find_search.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 23:52:25 by wpark             #+#    #+#             */
/*   Updated: 2019/07/14 21:46:26 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

extern	char	****g_poss;

int		compare_tab_to_case(int tab[g_size][g_size], int col, char *poss1)
{
	int is_case;
	int row;

	row = 0;
	is_case = 1;
	while (row < g_size)
	{
		if (tab[row][col] != poss1[row] - '0')
		{
			is_case = 0;
			break ;
		}
		row++;
	}
	if (tab[row][col] == 0)
		return (1);
	return (is_case);
}

int		check_colon(int tab[g_size][g_size], int col_ab[g_size][2])
{
	int	nb_case;
	int	is_case;
	int	col;

	col = 0;
	while (col < g_size)
	{
		is_case = 0;
		nb_case = 0;
		while (g_poss[col_ab[col][0]][col_ab[col][1]][nb_case] != NULL)
		{
			if (compare_tab_to_case(tab, col,
				g_poss[col_ab[col][0]][col_ab[col][1]][nb_case]))
			{
				is_case = 1;
				break ;
			}
			nb_case++;
		}
		if (is_case == 0)
			break ;
		col++;
	}
	return (is_case);
}

void	make_row_by_case(int tab[g_size][g_size], int row, char *str)
{
	int i;

	i = 0;
	while (i < g_size)
	{
		tab[row][i] = str[i] - '0';
		i++;
	}
}

void	make_row_empty(int tab[g_size][g_size], int row)
{
	int i;

	i = 0;
	while (i < g_size)
	{
		tab[row][i] = 0;
		i++;
	}
}

int		deep_find_search(int tab[g_size][g_size], int row_ab[g_size][2],
			int col_ab[g_size][2], int row)
{
	int	nb_case;
	int	i;

	if (!check_colon(tab, col_ab))
		return (0);
	if (row == g_size)
	{
		display(tab);
		return (1);
	}
	nb_case = 0;
	while (g_poss[row_ab[row][0]][row_ab[row][1]][nb_case])
	{
		i = 0;
		make_row_by_case(tab, row,
							g_poss[row_ab[row][0]][row_ab[row][1]][nb_case]);
		if (deep_find_search(tab, row_ab, col_ab, row + 1))
			return (1);
		make_row_empty(tab, row);
		nb_case++;
	}
	return (0);
}
