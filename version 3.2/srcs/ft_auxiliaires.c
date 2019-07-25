/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxiliaires.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:31:54 by olozano-          #+#    #+#             */
/*   Updated: 2019/07/14 21:45:45 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

void	swap_c(char *a, char *b)
{
	char	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	reverse_substr(char *a, char *b)
{
	while (a < b)
		swap_c(a++, b--);
}

int		next_permutation(char *str, int n)
{
	int i;
	int j;

	i = n - 1;
	while (str[i - 1] >= str[i])
		if (--i == 0)
			return (0);
	j = n - 1;
	while (j > i && str[j] < str[i - 1])
		j--;
	swap_c(str + i - 1, str + j);
	reverse_substr(str + i, str + n - 1);
	return (1);
}
