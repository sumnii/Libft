/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 12:04:05 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/12 20:17:41 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start_i;
	int		end_i;
	char	*str;
	int		len;

	i = 0;
	while (s1[i] && (ft_is_in_set(s1[i], set)))
		++i;
	start_i = i;
	i = ft_strlen(s1) - 1;
	while (s1[i] && (ft_is_in_set(s1[i], set)))
		--i;
	end_i = i;
	len = end_i - start_i + 2;
	if (len < 0)
		len = 1;
	str = (char *)malloc(sizeof(char) * len);
	if (str == 0)
		return (0);
	i = 0;
	while (start_i <= end_i)
		str[i++] = s1[start_i++];
	str[start_i] = 0;
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
