/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 13:42:29 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/07 13:59:31 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cnt_word(char const *str, char c);
static int	ft_cnt_char(char const *str, char c);

char	**ft_split(char const *s, char c)
{
	char	**ary;
	char	char_cnt;

	ary = (char **)malloc(sizeof(char *) * ft_cnt_word(s, c) + 1);
	if (ary == 0)
		return (0);
	while (*s)
	{
		while (*s == c)
			++s;
		char_cnt = ft_cnt_char(s, c);
		*ary = (char *)malloc(sizeof(char) * char_cnt + 1);
		if (*ary == 0)
			return (0);
		while (char_cnt)
		{
			**ary++ = *s++;
			--char_cnt;
		}
		**ary = 0;
		++ary;
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
			while (*str != c && *str)
				++str;
		}
	}
	return (cnt);
}

static int	ft_cnt_char(char const *str, char c)
{
	int	cnt;

	cnt = 0;
	while (*str != c)
	{
		++cnt;
		++str;
	}
	return (cnt);
}
