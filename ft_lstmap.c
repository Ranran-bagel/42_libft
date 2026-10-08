/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wezhou <wezhou@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:05:53 by wezhou            #+#    #+#             */
/*   Updated: 2026/04/28 10:40:33 by wezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*pcurrent;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	pcurrent = lst;
	while (pcurrent != NULL)
	{
		new_content = f(pcurrent -> content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		pcurrent = pcurrent -> next;
	}
	return (new_list);
}

// #include <stdio.h>
// #include <stdlib.h>

// static void	del_int(void *content)

// {
// 	free(content);
// }

// static void	print_int_list(t_list *lst)

// {
// 	while (lst)
// 	{
// 		printf("%d ", *(int *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }

// static void	*double_int(void *content)

// {
// 	int	*new_int;
// 	new_int = malloc(sizeof(int));
// 	if (!new_int)
// 		return (NULL);
// 	*new_int = (*(int *)content) * 2;
// 	return (new_int);
// }

// static int	*new_int(int n)

// {
// 	int	*p;
// 	p = malloc(sizeof(int));
// 	if (!p)
// 		return (NULL);
// 	*p = n;
// 	return (p);
// }

// int	main(void)

// {
// 	t_list	*lst;
// 	t_list	*mapped;
// 	lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew(new_int(1)));
// 	ft_lstadd_back(&lst, ft_lstnew(new_int(2)));
// 	ft_lstadd_back(&lst, ft_lstnew(new_int(3)));
// 	ft_lstadd_back(&lst, ft_lstnew(new_int(4)));
// 	printf("original: ");
// 	print_int_list(lst);
// 	mapped = ft_lstmap(lst, double_int, del_int);
// 	printf("mapped:   ");
// 	print_int_list(mapped);
// 	printf("original after map: ");
// 	print_int_list(lst);
// 	ft_lstclear(&lst, del_int);
// 	ft_lstclear(&mapped, del_int);
// 	return (0);
// }
