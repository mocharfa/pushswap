/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 03:06:39 by mocharfa          #+#    #+#             */
/*   Updated: 2021/11/27 05:29:51 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*cpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static int	lenght_to_allocate(int n)
{
	int		lenght;

	lenght = 0;
	if (n <= 0)
		lenght = 1;
	while (n != 0)
	{
		n = n / 10;
		lenght++;
	}
	return (lenght);
}

static char	*convert_to_char(char *str, int n, int lenght)
{
	while (n > 0)
	{
		str[lenght--] = (n % 10) + 48;
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		sign;
	char	*str;
	int		lenght;

	sign = 1;
	lenght = lenght_to_allocate(n);
	str = (char *)malloc((lenght + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
		return (cpy(str, "-2147483648"));
	str[lenght--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		sign = sign * -1;
		n = n * -1;
		str[0] = '-';
	}
	str = convert_to_char(str, n, lenght);
	return (str);
}
