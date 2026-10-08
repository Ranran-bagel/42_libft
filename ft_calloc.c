/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wezhou <wezhou@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:21:22 by wezhou            #+#    #+#             */
/*   Updated: 2026/04/23 21:55:16 by wezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*p;
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ptr = (unsigned char *)p;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (p);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	*p;
// 	int i;

// 	i  = 0;
// 	p = calloc(5, sizeof(int));
// 	while (i < 5)
// 	{
// 		printf("%d\n", p[i]);
// 		i++;
// 	}
// 	free (p);
// 	p = NULL;
// }
