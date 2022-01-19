/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 11:52:37 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/20 00:08:30 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (s == 0)
		return (0);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == 0)
		return (0);
	while (s[start + i] && i < len && start < ft_strlen(s))
	{
		substr[i] = s[start + i];
		++i;
	}
	substr[i] = 0;
	return (substr);
}
