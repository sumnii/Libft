/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:15:47 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/21 14:21:10 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int	i;

	i = ft_strlen(str);
	if ((char)chr == 0 && (str[i] == '\0'))
		return ((char *)&str[i]);
	--i;
	while (i >= 0)
	{
		if (str[i] == (char)chr)
			return ((char *)&str[i]);
		--i;
	}
	return (0);
}
