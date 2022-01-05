/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:50:16 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/05 13:59:05 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (dstsize < ft_strlen(dst))
		return (ft_strlne(src) + dstsize);
	while (dst[i] != 0)
		++i;
	while (src[j] != 0 && dstsize - 1 > i)
	{
		dst[i] = src[j];
		++i;
		++j;
	}
	dst[i] = 0;
	return (ft_strlen(dst));
}
