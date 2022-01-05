/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:16:17 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/05 14:08:32 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while (src[i] != 0 && dstsize - 1 > i)
	{
		dst[i] = src[i];
		++i;
	}
	if (dstsize > 0)
		dst[i] = 0;
	return (ft_strlen(src));
}
