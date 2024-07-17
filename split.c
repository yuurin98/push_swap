/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuurin98 <yuurin98@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:24:32 by lchee-ti          #+#    #+#             */
/*   Updated: 2024/07/07 23:11:09 by yuurin98         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_word_count(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*ft_word_dup(char const *s, char c)
{
	int		i;
	char	*word;
	int		len;

	i = 0;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**split;

	i = 0;
	j = 0;
	split = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!split)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			split[j] = ft_word_dup(&s[i], c);
			if (!split[j])
				return (NULL);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	split[j] = NULL;
	return (split);
}