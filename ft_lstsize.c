/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wezhou <wezhou@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:20:24 by wezhou            #+#    #+#             */
/*   Updated: 2026/04/27 13:27:33 by wezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*pcurrent;

	size = 0;
	pcurrent = lst;
	while (pcurrent != NULL)
	{
		pcurrent = pcurrent -> next;
		size++;
	}
	return (size);
}

// #include <stdio.h>
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
// 	printf("%d\n", ft_lstsize(pcurrent));
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
// }