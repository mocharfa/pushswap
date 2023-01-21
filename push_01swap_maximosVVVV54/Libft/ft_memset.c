/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 06:53:31 by mocharfa          #+#    #+#             */
/*   Updated: 2021/11/26 06:53:31 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = (unsigned char)c;
	return (s);
}
/*
int	main()
{
	//char s[16];
	int i = 0;
	int a[] = {1,2,3,4,5,6,7};
	ft_memset(a, 2, 6);
	while(i < 7)
	{
		printf("%d\n", a[i]);
		i++;
	}
	return (0);
}
*/
