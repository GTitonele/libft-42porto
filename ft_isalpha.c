/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:53:54 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/05 19:06:41 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>

int main ()
{
	printf("minha funcao: %d, funcao original:%d\n", 
			ft_isalpha ('4'), isalpha('4'));
	printf("minha funcao: %d, funcao original:%d\n", 
			ft_isalpha ('P'), isalpha('P'));
	return (0);
} */