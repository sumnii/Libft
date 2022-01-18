/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 12:04:05 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/18 23:26:30 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start_i;
	char	*str;
	int		len;

	i = 0;
	while (s1[i] && (ft_is_in_set(s1[i], set)))
		++i;
	if (s1[i] == 0)
		return ((char *)s1);
	start_i = i;
	i = ft_strlen(s1) - 1;
	while (s1[i] && (ft_is_in_set(s1[i], set)))
		--i;
	len = i - start_i + 1;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == 0)
		return (0);
	i = 0;
	while (i < len)
		str[i++] = s1[start_i++];
	str[i] = 0;
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
