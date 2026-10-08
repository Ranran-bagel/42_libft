/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wezhou <wezhou@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:46:34 by wezhou            #+#    #+#             */
/*   Updated: 2026/05/02 15:21:07 by wezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	size_t			len;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// static char	ft_tolower_1(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c <= 'Z' && c >= 'A')
// 		return (c + 32);
// 	return (c);
// }

// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "ABCLSJ";

// 	printf("%s\n", ft_strmapi(str, &ft_tolower_1));
// }
