/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 18:53:15 by daye              #+#    #+#             */
/*   Updated: 2019/07/16 17:23:16 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_power(10, 4));
}
