/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:53:47 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/05 19:06:32 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>

int main ()
{
	printf("minha funcao: %d, funcao original:%d\n", 
			ft_isalnum ('4'), isalnum('4'));
	printf("minha funcao: %d, funcao original:%d\n", 
			ft_isalnum ('@'), isalnum('@'));
	return (0);
} */