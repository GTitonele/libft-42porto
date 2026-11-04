/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:55:02 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/04 15:16:59 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/* #include <stdio.h>
#include <stdlib.h>

int main ()
{
	t_list *head = NULL, *node1, *node2, *node3;
	
	node1 = ft_lstnew("primeiro");
	node2 = ft_lstnew("segundo");
	node3 = ft_lstnew("terceiro");

	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	
	printf("tamanho da lista: %d\n", ft_lstsize(head));
	return (0);
}
 */
