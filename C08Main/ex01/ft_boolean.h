/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 00:38:33 by daye              #+#    #+#             */
/*   Updated: 2019/07/22 13:39:45 by daye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_BOOLEAN_H
# define _FT_BOOLEAN_H
# include <unistd.h>

typedef int			t_bool;
# define SUCCESS	0
# define TRUE		1
# define FALSE		0
# define EVEN(x)	x%2==0
# define ODD_MSG	"I have an odd number of arguments\n"
# define EVEN_MSG	"I have an even number of arguments.\n"

#endif
