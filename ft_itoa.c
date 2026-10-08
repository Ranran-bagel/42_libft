/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wezhou <wezhou@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 16:29:09 by wezhou            #+#    #+#             */
/*   Updated: 2026/04/29 17:17:14 by wezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_int(long nb)
{
	size_t	count;

	count = 0;
	if (nb < 0)
	{
		count++;
		nb = -nb;
	}
	count++;
	while (nb >= 10)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	len;
	size_t	i;
	char	*res;

	nb = n;
	len = count_int(nb);
	i = len;
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	res[len] = '\0';
	while (i--)
	{
		if (i == 0 && n < 0)
			break ;
		res[i] = (nb % 10) + '0';
		nb /= 10;
	}
	return (res);
}

// #include <stdio.h>
// #include <limits.h>
// int	main(void)
// {
// 	printf("%s\n", ft_itoa(20600));
// 	printf("%s\n", ft_itoa(-20600));
// 	printf("%ld\n", count_int(-20600));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(100));
// 	printf("%s\n", ft_itoa(INT_MIN));
// 	printf("%d\n", INT_MIN);
// }
