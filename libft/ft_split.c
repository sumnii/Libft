/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 13:42:29 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/12 20:57:47 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static int	ft_cnt_word(char const *str, char c);
static int	ft_cnt_char(char const *str, char c);

char	**ft_split(char const *s, char c)
{
	char	**ary;
	char	char_cnt;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ary = (char **)malloc(sizeof(char *) * (ft_cnt_word(s, c) + 1));
	if (ary == 0)
		return (0);
	while (*s)
	{
		while (*s == c)
			++s;
		char_cnt = ft_cnt_char(s, c);
		ary[i] = (char *)malloc(sizeof(char) * char_cnt + 1);
		if (ary[i] == 0)
			return (0);
		while (char_cnt > 0)
		{
			ary[i][j++] = *s++;
			--char_cnt;
		}
		ary[i][j] = 0;
		++i;
		j = 0;
	}
	return (ary);
}

static int	ft_cnt_word(char const *str, char c)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		if (*str == c)
			++str;
		else
		{
			++cnt;
			while (*str != c)
				++str;
		}
	}
	return (cnt);
}

static int	ft_cnt_char(char const *str, char c)
{
	int	cnt;

	cnt = 0;
	while (*str != c && *str)
	{
		++cnt;
		++str;
	}
	return (cnt);
}
