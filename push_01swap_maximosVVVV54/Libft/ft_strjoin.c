/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 03:51:19 by mocharfa          #+#    #+#             */
/*   Updated: 2021/11/27 05:37:32 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	char	*rec;

	len = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1 && s2)
		len = ft_strlen(s2) + 1;
	else if (s1 && s2)
		len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(sizeof(*str) * (len));
	if (!str)
		return (NULL);
	rec = str;
	if (s1)
		while (*s1)
			*str++ = *s1++;
	if (s2)
		while (*s2)
			*str++ = *s2++;
	*str = 0;
	return (rec);
}
