/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:54:31 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/04 13:08:34 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

/* #include <stdio.h>
#include <stdlib.h>

int main ()
{
	t_list *head = NULL;

	ft_lstadd_back(&head, ft_lstnew(ft_strdup("primeiro")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("segundo")));
	
	ft_lstclear(&head, free);
	if (head == NULL)
		printf("a lista foi completamente apagada\n");
	return (0);
}
 */