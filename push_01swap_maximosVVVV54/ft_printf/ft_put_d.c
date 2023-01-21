/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 00:57:24 by mocharfa          #+#    #+#             */
/*   Updated: 2021/12/20 08:38:43 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_d(long long n)
{
	int	sum;

	sum = 0;
	if (n < 0)
	{
		sum += ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		sum += ft_put_d(n / 10);
		sum += ft_putchar(n % 10 + '0');
	}
	else
	{
		sum += ft_putchar(n + '0');
	}
	return (sum);
}
