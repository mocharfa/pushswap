/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 22:08:31 by mocharfa          #+#    #+#             */
/*   Updated: 2021/12/21 08:00:03 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_put_s(char *s);
int	ft_put_hex(unsigned long n, int c);
int	ft_put_d(long long n);
int	ft_printf(const char *str, ...);
int	ft_check_type(char c, va_list ap);

#endif
