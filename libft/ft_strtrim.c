/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 12:04:05 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/20 23:00:55 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char c, char const *set);
static int	ft_check_pnt(char const *str, char const *set, int way);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_i;
	size_t	end_i;
	size_t	len;
	char	*str;

	start_i = ft_check_pnt(s1, set, 1);
	if (s1[start_i] == 0)
		return ("");
	end_i = ft_check_pnt(s1, set, -1);
	len = end_i - start_i + 1;
	str = ft_substr(s1, start_i, len);
	return (str);
}

static int	ft_is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		++set;
	}
	return (0);
}

static int	ft_check_pnt(char const *str, char const *set, int way)
{
	int	i;

	i = 0;
	if (way == 1)
	{
		while (str[i] && (ft_is_in_set(str[i], set)))
			++i;
	}
	else if (way == -1)
	{
		i = ft_strlen(str) - 1;
		while (str[i] && (ft_is_in_set(str[i], set)))
			--i;
	}
	return (i);
}
