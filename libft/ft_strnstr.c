/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:20:16 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/05 16:32:35 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return (haystack);
	while (haystack[i] != 0 && i < len)
	{
		if (*(haystack + i) == needle[j] && ptr == 0)
		{
			*ptr = *(haystack + i);
			++i;
			++j;
		}
		else if (*haystack == needle[j] && ptr != 0)
		{
			haystack = &ptr;
			ptr = 0;
			i = 0;
		}
		else
			++i;
	}
	return (0);
}
