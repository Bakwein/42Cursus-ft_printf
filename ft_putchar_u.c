/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stunca <stunca@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 07:02:22 by stunca            #+#    #+#             */
/*   Updated: 2022/03/08 07:02:28 by stunca           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_u(unsigned int a)
{
	int		len;
	char	*num;

	len = 0;
	if (a == 0)
	{
		len += ft_putchar('0');
		return (len);
	}
	if ((int)a < 0)
	{
		if ((int)a == -1)
			a = 4294967295;
		else
			a = 4294967295 + a + 1;
	}	
	num = ft_uitoa(a);
	len += ft_putchar_s(num);
	free(num);
	return (len);
}
