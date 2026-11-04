/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:54:26 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/04 12:44:49 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/* #include <stdio.h>
#include <stdlib.h>

int main ()
{
	t_list *head = NULL, *node1, *node2, *node3, *current;
	
	node1 = ft_lstnew("primeiro");
	node2 = ft_lstnew("segundo");
	node3 = ft_lstnew("terceiro");

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);
	
	current = head;
	int i = 1;
	while (current != NULL)
	{
		printf("node %d: %s\n", i, (char *)current->content);
		current = current->next;
		i++;
	}
	return (0);
} */
