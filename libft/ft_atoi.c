/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:46:35 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/19 01:46:10 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>

static int	ft_sign_check(const char *str);

int	ft_atoi(const char *str)
{
	long long	nb;
	int			i;
	int			sign;

	nb = 0;
	i = 0;
	sign = 1;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		++i;
	if (str[i] == '+' || str[i] == '-')
		sign = ft_sign_check(&str[i++]);
	while (str[i] != 0 && '0' <= str[i] && str[i] <= '9')
	{
		if (sign == 1 && ((nb > LLONG_MAX / 10)
				|| (nb == LLONG_MAX / 10 && str[i] >= '7')))
			return (-1);
		else if (sign == -1 && ((nb > LLONG_MIN / 10 * -1)
				|| (nb == LLONG_MIN / 10 * -1 && str[i] >= '8')))
			return (0);
		nb = nb * 10 + str[i++] - '0';
		printf("nb : %lld\n", nb);
	}
	return (sign * (int)nb);
}

static int	ft_sign_check(const char *str)
{
	if (*str == '+')
		return (1);
	else
		return (-1);
}
