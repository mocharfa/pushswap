/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 01:07:23 by mocharfa          #+#    #+#             */
/*   Updated: 2021/12/20 08:27:46 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_s(char *s)
{
	int	sum;

	sum = 0;
	if (s)
	{
		while (s[sum])
			sum += ft_putchar(s[sum]);
	}
	else
	{
		sum += ft_put_s("(null)");
	}
	return (sum);
}
