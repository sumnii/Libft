/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:15:47 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/12 18:17:34 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int	i;

	i = ft_strlen(str);
	if (chr == 0 && (str[i] == '\0'))
		return ((char *)&str[i]);
	--i;
	while (i >= 0)
	{
		if (str[i] == chr)
			return ((char *)&str[i]);
		--i;
	}
	return (0);
}
