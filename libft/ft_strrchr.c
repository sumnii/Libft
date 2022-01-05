/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:15:47 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/05 14:19:55 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int		i;
	char	*ptr;

	i = ft_strlen(str) - 1;
	while (i > 0)
	{
		if (str[i] == chr)
		{
			ptr = &str[i];
			return (ptr);
		}
		else
			--i;
	}
	return (0);
}
