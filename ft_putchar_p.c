/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stunca <stunca@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 07:01:16 by stunca            #+#    #+#             */
/*   Updated: 2022/03/08 07:01:19 by stunca           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(unsigned long long a)
{
	int	i;

	i = 0;
	while (a)
	{
		a = a / 16;
		i++;
	}
	return (i);
}

int	ft_putchar_p(unsigned long long a)
{
	int	len;

	len = 0;
	write (1, "0x", 2);
	len += 2;
	if (a == 0)
	{
		write (1, "0", 1);
		return (len + 1);
	}
	else
		ft_puthex(a);
	len += ft_count(a);
	return (len);
}
