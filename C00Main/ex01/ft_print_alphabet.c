/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 21:26:55 by daye              #+#    #+#             */
/*   Updated: 2019/07/05 15:43:34 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char start;
	char end;

	start = 97;
	end = 122;
	while (start <= end)
	{
		ft_putchar(start);
		start++;
	}
}

int		main(void)
{
	ft_print_alphabet();
}
