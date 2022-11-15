/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printres.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:16:52 by bkaztaou          #+#    #+#             */
/*   Updated: 2022/11/15 21:20:19 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printres(char c, va_list args, int *len)
{
	if (c == '%')
		*len += ft_putchar_len('%');
	else if (c == 's')
		*len += ft_putstr_len(va_arg(args, char *));
	else if (c == 'c')
		*len += ft_putchar_len(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		ft_putnbr_len(va_arg(args, int), len);
	else if (c == 'u')
		ft_putunbr_len(va_arg(args, unsigned int), len);
	else if (c == 'x')
		ft_puthexa(va_arg(args, unsigned int), "0123456789abcdef", len);
	else if (c == 'X')
		ft_puthexa(va_arg(args, unsigned int), "0123456789ABCDEF", len);
	else if (c == 'p')
	{
		*len += ft_putstr_len("0x");
		ft_putadress(va_arg(args, unsigned long long), len);
	}
}
