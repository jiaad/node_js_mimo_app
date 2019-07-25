/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 00:26:53 by daye              #+#    #+#             */
/*   Updated: 2019/07/25 01:01:36 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "lib.h"
void	ft_do_op(int ac, char **ag)
{
	int a;
	int b;

	a = ft_atoi(ag[1]);
	b = ft_atoi(ag[3]);
	if (ac != 4 && (*ag[2] != '-' && *ag[2] != '+'
				&& *ag[2] != '%' && *ag[2] != '/' && *ag[2] != '*'))
	{
		write(1, "0", 1);
	}
	if (*ag[2] == '+')
		(*ft_summ)(a, b);
	else if (*ag[2] == '-')
		(*ft_diff)(a, b);
	else if (*ag[2] == '%')
		(*ft_modul)(a, b);
	else if (*ag[2] == '/')
		(*ft_div)(a, b);
	else if (*ag[2] == '*')
		(*ft_mult)(a, b);
}

int main(int ac, char **ag)
{
	ft_do_op(ac, ag);
}
