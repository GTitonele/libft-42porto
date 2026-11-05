/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:54:04 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/05 19:07:24 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>

int main ()
{
	printf("minha funcao: %d, funcao original:%d\n", 
			ft_isdigit ('4'), isdigit('4'));
	printf("minha funcao: %d, funcao original:%d\n", 
			ft_isdigit ('P'), isdigit('P'));
	return (0);
} */