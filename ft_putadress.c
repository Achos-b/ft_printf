/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:11:30 by bkaztaou          #+#    #+#             */
/*   Updated: 2022/11/15 21:00:24 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadress(unsigned long nbr, int *len)
{
	unsigned long	bs;
	char			*base;

	base = "0123456789abcdef";
	bs = ft_strlen(base);
	if (nbr >= bs)
	{
		ft_putadress((nbr / bs), len);
		*len += ft_putchar_len(base[nbr % bs]);
	}
	else
		*len += ft_putchar_len(base[nbr]);
}
