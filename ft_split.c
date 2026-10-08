/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wezhou <wezhou@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 18:38:57 by wezhou            #+#    #+#             */
/*   Updated: 2026/04/28 23:01:03 by wezhou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_strdup_word(const char *s, size_t start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = malloc(len + 1);
	if (!dst)
		return (NULL);
	while (s[start] && i < len)
	{
		dst[i] = s[start];
		start++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	j;
	char	**word;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	word = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!word)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		word[j++] = ft_strdup_word(s, start, i - start);
	}
	word[j] = NULL;
	return (word);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[] = ",,,hello,,,word,,,42,,,,";
// 	char	**word;
// 	size_t	i;

// 	i = 0;
// 	word = ft_split(str, ',');
// 	while (word[i])
// 	{
// 		printf("%s\n", word[i]);
// 		i++;
// 	}
// }