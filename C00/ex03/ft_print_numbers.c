/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 12:46:17 by daye              #+#    #+#             */
/*   Updated: 2019/07/07 09:55:19 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_numbers(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int start;
	int end;

	start = 48;
	end = 57;
	while (start <= end)
	{
		ft_put_numbers(start);
		start++;
	}
}
