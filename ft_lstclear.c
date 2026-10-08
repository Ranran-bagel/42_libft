/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wezhou <wezhou@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 21:40:29 by wezhou            #+#    #+#             */
/*   Updated: 2026/04/28 21:52:14 by wezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void	*))
{
	t_list	*pcurrent;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	pcurrent = *lst;
	while (pcurrent != NULL)
	{
		tmp = pcurrent -> next;
		del(pcurrent -> content);
		free(pcurrent);
		pcurrent = tmp;
	}
	*lst = NULL;
}

// static void	del(void	*content)
// {
// 	(void)content;
// }

// #include <stdio.h>
// #include <stdint.h>
// int main(void)
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *node4;
// 	t_list *node5;
// 	t_list *node6;
// 	t_list *pcurrent;

// 	node1 = ft_lstnew((void *)(intptr_t)1);
// 	node2 = ft_lstnew((void *)(intptr_t)2);
// 	node3 = ft_lstnew((void *)(intptr_t)1);
// 	node4 = ft_lstnew((void *)(intptr_t)1);
// 	node5 = ft_lstnew((void *)(intptr_t)1);
// 	node6 = ft_lstnew((void *)(intptr_t)1);
// 	node1 -> next = node2;
// 	node2 -> next = node3;
// 	node3 -> next = node4;
// 	node4 -> next = node5;
// 	node5 -> next = node6;
// 	pcurrent = node1;
// 	ft_lstclear(&pcurrent, &del);
// 	if (pcurrent == NULL)
// 		printf("%s\n", "cleared");
// }