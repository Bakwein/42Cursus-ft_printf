/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stunca <stunca@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 06:58:33 by stunca            #+#    #+#             */
/*   Updated: 2022/03/08 06:58:34 by stunca           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

char		*ft_uitoa(unsigned int a);

int			ft_printf(const char *str, ...);
int			ft_putchar(int c);
int			ft_putchar_s(char *c);
int			ft_putchar_u(unsigned int a);
int			ft_putchar_d(int a);
int			ft_putchar_p(unsigned long long a);
void		ft_puthex(unsigned long long a);
int			ft_putchar_x(unsigned int x, int c);

#endif
