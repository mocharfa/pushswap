/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 23:27:56 by mocharfa          #+#    #+#             */
/*   Updated: 2021/12/20 08:29:41 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_type(char c, va_list ap)
{
	int	sum;

	sum = 0;
	if (c == 'c')
		sum += ft_putchar(va_arg(ap, int));
	if (c == 's')
		sum += ft_put_s(va_arg(ap, char *));
	if (c == '%')
		sum += ft_putchar('%');
	if (c == 'd' || c == 'i')
		sum += ft_put_d(va_arg(ap, int));
	if (c == 'u')
		sum += ft_put_d(va_arg(ap, unsigned int));
	if (c == 'X')
		sum += ft_put_hex(va_arg(ap, unsigned int), 1);
	if (c == 'x')
		sum += ft_put_hex(va_arg(ap, unsigned int), 0);
	if (c == 'p')
	{
		sum += ft_put_s("0x");
		sum += ft_put_hex(va_arg(ap, unsigned long), 0);
	}
	return (sum);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		sum;

	va_start(ap, str);
	i = 0;
	sum = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			sum += ft_check_type(str[i], ap);
		}
		else
			sum += ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (sum);
}
