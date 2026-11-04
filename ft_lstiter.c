/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:54:43 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/04 13:31:32 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* #include <stdio.h>
#include <stdlib.h>

void print(void *content)
{
	char *str = (char *)content;
	printf("%s\n", str);
}

int main ()
{
	t_list *head = NULL;

	ft_lstadd_back(&head, ft_lstnew(ft_strdup("primeiro")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("segundo")));
	ft_lstiter(head, print);
	return (0);
}
 */