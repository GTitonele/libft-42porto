/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:56:44 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/04 18:25:10 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/* #include <stdio.h>

int main ()
{
	ft_putchar_fd('4', 1);
	ft_putchar_fd('2', 1);
	return (0);
} */