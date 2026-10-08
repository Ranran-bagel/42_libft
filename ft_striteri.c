/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wezhou <wezhou@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 18:27:07 by wezhou            #+#    #+#             */
/*   Updated: 2026/04/26 18:35:17 by wezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// static void	ft_tolower_1(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c <= 'Z' && *c >= 'A')
// 		*c  = *c + 32;
// }

// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "ABCLSJ";
// 	ft_striteri(str, &ft_tolower_1);

// 	printf("%s\n", str);
// }
