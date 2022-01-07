/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 12:04:05 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/07 13:42:11 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	char const	*start_ptr;
	char const	*end_ptr;
	char		*str;

	i = 0;
	while (s1[i] && (ft_is_in_set(s1[i], set)))
		++i;
	start_ptr = &s1[i];
	i = ft_strlen(s1) - 1;
	while (s1[i] && (ft_is_in_set(s1[i], set)))
		--i;
	end_ptr = &s1[i];
	str = (char *)malloc(sizeof(end_ptr - start_ptr) + 2);
	if (str == 0)
		return (0);
	while (start_ptr < end_ptr + 1)
		*str++ = *start_ptr++;
	*str = 0;
	return (str);
}

static int	ft_is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		else
			++set;
	}
	return (0);
}
