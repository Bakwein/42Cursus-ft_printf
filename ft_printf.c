/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stunca <stunca@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 06:59:15 by stunca            #+#    #+#             */
/*   Updated: 2022/03/08 06:59:40 by stunca           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(va_list ag, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(ag, int));
	else if (c == 's')
		len += ft_putchar_s(va_arg(ag, char *));
	else if (c == 'p')
		len += ft_putchar_p(va_arg(ag, unsigned long long));
	else if (c == 'd' || c == 'i')
		len += ft_putchar_d(va_arg(ag, int));
	else if (c == 'u')
		len += ft_putchar_u(va_arg(ag, unsigned int));
	else if (c == 'x' || c == 'X')
		len += ft_putchar_x(va_arg(ag, unsigned int), c);
	else if (c == '%')
		len += ft_putchar('%');
	else
		len += ft_putchar(c);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	ag;

	va_start(ag, str);
	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_check(ag, str[i]);
			i++;
		}
		else
			len += ft_putchar(str[i++]);
	}
	va_end(ag);
	return (len);
}
