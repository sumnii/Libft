/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:10:10 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/05 14:13:34 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	char	*ptr;
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == chr)
		{
			ptr = &str[i];
			return (ptr);
		}
		else
			++i;
	}
	return (0);
}
