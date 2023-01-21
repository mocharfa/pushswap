/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 02:04:29 by mocharfa          #+#    #+#             */
/*   Updated: 2021/12/20 08:38:57 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned long n, int c)
{
	int	x;
	int	sum;

	sum = 0;
	if (c == 1)
		x = 55;
	else
		x = 87;
	if (n >= 16)
	{
		sum += ft_put_hex((n / 16), c);
		if (n % 16 <= 9)
			sum += ft_putchar((n % 16) + 48);
		else if ((n % 16) > 9)
			sum += ft_putchar((n % 16) + x);
	}
	else
	{
		if (n % 16 <= 9)
			sum += ft_putchar(n + 48);
		else if ((n % 16) > 9)
			sum += ft_putchar(n + x);
	}
	return (sum);
}
