/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 18:21:12 by daye              #+#    #+#             */
/*   Updated: 2019/07/07 10:08:30 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_logic(char i, char j)
{
	ft_putchar((char)i / 10 + '0');
	ft_putchar((char)i % 10 + '0');
	ft_putchar(' ');
	ft_putchar((char)j / 10 + '0');
	ft_putchar((char)j % 10 + '0');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_logic(a, b);
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
