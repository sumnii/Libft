/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 13:59:44 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/07 14:10:32 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_positive(int n);
static int	ft_count_digit(int n);

char	*ft_itoa(int n)
{
	char		*str;
	long long	nb;
	int			sign;
	int			digit;

	sign = ft_is_positive(n);
	if (n < 0)
		nb = -n;
	else
		nb = n;
	digit = ft_count_digit(n);
	str = (char *)malloc(sizeof(char) * digit + 1);
	if (str == 0)
		return (0);
	if (sign == -1)
		str[0] = '-';
	str[digit] = 0;
	while (nb > 9)
	{
		str[digit-- - 1] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}

static int	ft_is_positive(int n)
{
	if (n >= 0)
		return (1);
	else
		return (-1);
}

static int	ft_count_digit(int n)
{
	int	cnt;

	cnt = 1;
	if (n < 0)
	{
		++cnt;
		n *= -1;
	}
	while (n > 9)
	{
		n = n / 10;
		++cnt;
	}
	return (cnt);
}
