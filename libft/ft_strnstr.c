/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:20:16 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/07 14:46:34 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*stack_ptr;
	char	*needle_ptr;
	char	*res_ptr;
	int		i;
	int		j;

	stack_ptr = haystack;
	needle_ptr = needle;
	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return (haystack);
	while (*stack_ptr && i < len)
		;
	return (0);
}
