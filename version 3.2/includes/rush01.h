/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 23:36:02 by wpark             #+#    #+#             */
/*   Updated: 2019/07/14 21:35:52 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

int		g_size;
char	****g_poss;
char	****precalcul(int n, int maxpass);
int		deep_find_search(int tab[g_size][g_size], int row_ab[g_size][2],
		int col_ab[g_size][2], int row);
void	display(int tab[g_size][g_size]);
int		ft_recursive_factorial(int nb);
void	swap_c(char *a, char *b);
void	reverse_substr(char *a, char *b);
int		next_permutation(char *str, int n);

#endif
