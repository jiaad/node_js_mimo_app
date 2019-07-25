/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precalcul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:03:04 by olozano-          #+#    #+#             */
/*   Updated: 2019/07/14 21:55:58 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		count_boxes(char *str, int n, int dd)
{
	int i;
	int max_before;
	int count;

	count = 0;
	i = (dd > 0) ? 0 : n - 1;
	max_before = '0';
	while (str[i] && i > -1)
	{
		if (str[i] > max_before)
		{
			max_before = str[i];
			count++;
		}
		i += dd;
	}
	return (count);
}

void	put_this_here(char *this, char **here, int n)
{
	int find;
	int i;

	find = 0;
	while (*(here + find))
		find++;
	*(here + find) = malloc(sizeof(char) * (n + 1));
	i = 0;
	while (this[i])
	{
		here[find][i] = this[i];
		i++;
	}
	here[find][i] = '\0';
	here[find + 1] = NULL;
}

char	****allocate_memory(int n, int maxposs)
{
	char	****proper;
	int		i;
	int		j;

	proper = malloc(sizeof(char***) * (n + 1));
	i = 0;
	while (i < n)
	{
		proper[i] = malloc(sizeof(char**) * (n + 1));
		j = 0;
		while (j < n)
		{
			if (i + j <= n + 1)
				proper[i][j] = malloc(sizeof(char*) * (maxposs + 1));
			else
				proper[i][j] = malloc(sizeof(char*));
			proper[i][j][0] = NULL;
			j++;
		}
		i++;
	}
	return (proper);
}

char	****precalcul(int n, int maxposs)
{
	char	****poss;
	int		i;
	int		j;
	char	*permutation;
	int		fact;

	fact = ft_recursive_factorial(n);
	poss = allocate_memory(n, maxposs);
	permutation = malloc(sizeof(char) * (n + 1));
	i = 1;
	while (i <= n)
	{
		permutation[i - 1] = i + '0';
		i++;
	}
	permutation[n] = '\0';
	put_this_here(permutation, poss[n - 1][0], n);
	while (next_permutation(permutation, n))
	{
		i = count_boxes(permutation, n, 1);
		j = count_boxes(permutation, n, -1);
		put_this_here(permutation, poss[i - 1][j - 1], n);
	}
	return (poss);
}
