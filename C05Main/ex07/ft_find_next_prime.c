/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:21:37 by daye              #+#    #+#             */
/*   Updated: 2019/07/18 18:00:20 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb / i)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
int main() 
{
	  printf("%d",ft_find_next_prime(27));
	  printf("%d",ft_find_next_prime(12));
	  printf("%d",ft_find_next_prime(-9));
	  printf("%d",ft_find_next_prime(420));
	  printf("%d",ft_find_next_prime(-9));
	  printf("%d",ft_find_next_prime(-9));
	  printf("%d",ft_find_next_prime(25));
	  printf("%d",ft_find_next_prime(89));
	  printf("%d",ft_find_next_prime(-9));
	  printf("%d",ft_find_next_prime(78));
	  printf("%d",ft_find_next_prime(-89));
	  return 0;
}
