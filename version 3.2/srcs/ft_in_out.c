/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 00:11:09 by wpark             #+#    #+#             */
/*   Updated: 2019/07/14 21:52:20 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

extern int	g_size;

void	display(int tab[g_size][g_size])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < g_size)
	{
		j = 0;
		while (j < g_size)
		{
			c = tab[i][j] + '0';
			write(1, &c, 1);
			if (j != g_size - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\r'
			|| c == '\v' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int		is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		verify_input(char *str)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 1)
		{
			if (!is_space(str[i]))
				return (0);
		}
		else
		{
			if (!is_number(str[i]))
				return (0);
			else
				cnt++;
		}
		i++;
	}
	if (cnt % 4 == 0)
		return (cnt / 4);
	else
		return (0);
}
