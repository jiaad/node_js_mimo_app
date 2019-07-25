/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 11:44:33 by daye              #+#    #+#             */
/*   Updated: 2019/07/05 15:50:57 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char start;
	char end;

	start = 122;
	end = 97;
	while (start >= end)
	{
		ft_putchar(start);
		start--;
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
}
