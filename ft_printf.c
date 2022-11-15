/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 05:48:33 by bkaztaou          #+#    #+#             */
/*   Updated: 2022/11/15 21:17:37 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		len;
	int		i;

	i = -1;
	len = 0;
	va_start(args, s);
	while (s[++i])
	{
		if (s[i] == '%')
			ft_printres(s[++i], args, &len);
		else
			len += ft_putchar_len(s[i]);
	}
	va_end(args);
	return (len);
}
