/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:28:55 by daye              #+#    #+#             */
/*   Updated: 2019/07/17 18:42:34 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	res = 1;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_power(10, 4));
}
