/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 00:07:24 by daye              #+#    #+#             */
/*   Updated: 2019/07/25 20:10:33 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_str_compteur(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		same(char str, char *sep)
{
	int i;

	i = 0;
	while (sep[i])
	{
		if (str == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_count_sep(char *src, char *sep)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (src[i])
	{
		if (same(src[i], sep) == 1)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	**dest;

	i = 0;
	j = 0;
	dest = malloc(sizeof(char) * (ft_count_sep(str, sep) + 1));
	if (!dest)
		return (NULL);
	while (str[j] && i <= ft_count_sep(str, sep))
	{
		dest[i] = malloc(sizeof(char) * (ft_str_compteur(str) *
					(ft_str_compteur(sep) * ft_count_sep(str, sep) * 150)));
		k = 0;
		while (same(str[j], sep) == 0 && str[j] != '\0')
			dest[i][k++] = str[j++];
		dest[i][k] = '\0';
		if (same(str[j], sep) == 1)
			j++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}

int main(){
	char a[] = "bonjour comment ca va moi ca va bien";
	int i =-1;
	while (a[++i] != '\0')
		printf("%s \n", *ft_split(&a[i] , "a"));
}
