/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wezhou <wezhou@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 21:30:33 by wezhou            #+#    #+#             */
/*   Updated: 2026/04/28 21:38:10 by wezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*cur;
// 	int			n;
// 	n = 1;
// 	node1 = ft_lstnew((void *)&n);
// 	node2 = ft_lstnew((void *)&n);
// 	node1 -> next = node2;
// 	cur = node1;
// 	while (cur != NULL)
// 	{
// 		printf("%d\n", *(int *)(node1 -> content));
// 		cur = cur -> next;
// 	}
// 	free(node1);
// 	node1 = NULL;
// 	free(node2);
// 	node2 = NULL;
// }