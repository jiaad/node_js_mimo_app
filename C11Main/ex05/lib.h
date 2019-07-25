/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 01:02:29 by daye              #+#    #+#             */
/*   Updated: 2019/07/25 01:22:45 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#ifndef LIB_H
# define LIB_H

int		ft_atoi(char *str);
void	ft_putnbr(long int nbr);

void	ft_summ(int a, int b)
{
	ft_putnbr(a + b);
}

void	ft_diff(int a, int b)
{
	ft_putnbr(a - b);
}

void	ft_modul(int a, int b)
{
	if (b == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(a % b);
}

void	ft_div(int a, int b)
{
	if (b == 0)
		write(1, "Stop : division by zero", 23);
	else
		ft_putnbr(a / b);
}

void	ft_mult(int a, int b)
{
	ft_putnbr(a * b);
}

#endif
