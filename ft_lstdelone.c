/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:54:38 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/04 13:17:13 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/* #include <stdio.h>
#include <stdlib.h>

int main ()
{
	t_list *node;

	node = ft_lstnew(ft_strdup("teste"));
	printf("conteudo: %s\n", (char *)node->content);
	ft_lstdelone(node, free);
	node = NULL;
	printf("deletado!\n");
	return (0);
} */