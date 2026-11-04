/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:54:52 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/04 15:58:00 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/* #include <stdio.h>
#include <stdlib.h>

void *to_upper(void *content)
{
	char *str, *new_str;
	int i;
	
	str = (char *)content;
	new_str = ft_strdup(str);
	i = 0;
	while (new_str[i])
	{
		new_str[i] = ft_toupper(new_str[i]);
		i++;
	}
	return ((void *)new_str);
}

int main ()
{
	t_list *original_list = NULL, *new_list = NULL, *current;
	
	ft_lstadd_back(&original_list, ft_lstnew(ft_strdup("primeiro")));
	ft_lstadd_back(&original_list, ft_lstnew(ft_strdup("segundo")));
	printf("lista original\n");
	current = original_list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	
	new_list = ft_lstmap(original_list, to_upper, free);
	printf("nova lista\n");
	current = new_list;
	while(current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	return (0);
} */