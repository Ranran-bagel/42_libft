/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wezhou <wezhou@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:25:55 by wezhou            #+#    #+#             */
/*   Updated: 2026/04/28 21:45:52 by wezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}

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
// 	t_list *new;
// 	t_list *pcurrent;

// 	node1 = ft_lstnew((void *)(intptr_t)1);
// 	node2 = ft_lstnew((void *)(intptr_t)2);
// 	node3 = ft_lstnew((void *)(intptr_t)1);
// 	node4 = ft_lstnew((void *)(intptr_t)1);
// 	node5 = ft_lstnew((void *)(intptr_t)1);
// 	node6 = ft_lstnew((void *)(intptr_t)1);
// 	new = ft_lstnew((void *)(intptr_t)2);
// 	node1 -> next = node2;
// 	node2 -> next = node3;
// 	node3 -> next = node4;
// 	node4 -> next = node5;
// 	node5 -> next = node6;
// 	pcurrent = node1;
// 	ft_lstadd_front(&pcurrent, new);
// 	while (pcurrent != NULL)
// 	{
// 		printf("%d ", (int)(intptr_t)pcurrent -> content);
// 		pcurrent = pcurrent -> next;
// 	}
// 	free(node1);
// 	node1 = NULL;
// 	free(node2);
// 	node2 = NULL;
// 	free(node3);
// 	node3 = NULL;
// 	free(node4);
// 	node4 = NULL;
// 	free(node5);
// 	node5 = NULL;
// 	free(node6);
// 	node6 = NULL;
// 	free(new);
// 	new = NULL;
// }