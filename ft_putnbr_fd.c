/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilherme <guilherme@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:40:47 by guilherme         #+#    #+#             */
/*   Updated: 2026/10/19 11:50:24 by guilherme        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd ('-', fd);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr_fd (nb / 10, fd);
	ft_putchar_fd ((nb % 10) + '0', fd);
}
