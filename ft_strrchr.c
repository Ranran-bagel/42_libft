/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wezhou <wezhou@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:01:25 by wezhou            #+#    #+#             */
/*   Updated: 2026/04/28 21:21:33 by wezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			s_len;
	size_t			i;
	unsigned char	uc;

	uc = (unsigned char)c;
	s_len = 0;
	while (s[s_len])
		s_len++;
	i = s_len;
	if (c == '\0')
		return ((char *)&s[i]);
	while (i--)
	{
		if (s[i] == uc)
			return ((char *)&s[i]);
	}
	return (NULL);
}
