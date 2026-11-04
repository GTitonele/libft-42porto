/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:54:47 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/04 13:45:28 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/* #include <stdio.h>
#include <stdlib.h>

int main ()
{
	t_list *list = NULL, *node1, *node2, *node3;

	node1 = ft_lstnew("primeiro");
	node2 = ft_lstnew("segundo");
	node3 = ft_lstnew("terceiro");

	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	
	printf("%s\n", (char *) ft_lstlast(list)->content);
	return (0);
} */