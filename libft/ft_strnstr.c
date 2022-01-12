/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:20:16 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/12 18:02:39 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	needle_len = ft_strlen(needle);
	i = 0;
	if (len == 0)
		return (0);
	if (needle_len == 0)
		return ((char *)haystack);
	while (i <= len - needle_len)
	{
		if (*(haystack + i) == needle[0])
		{
			if (ft_strncmp(haystack + i, needle, needle_len) == 0)
				return ((char *)haystack + i);
		}
		++i;
	}
	return (0);
}
