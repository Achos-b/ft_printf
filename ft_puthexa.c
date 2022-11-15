/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:47:29 by bkaztaou          #+#    #+#             */
/*   Updated: 2022/11/15 20:50:53 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned int nbr, char *base, int *len)
{
	unsigned int	bs;

	bs = ft_strlen(base);
	if (nbr >= bs)
	{
		ft_puthexa((nbr / bs), base, len);
		*len += ft_putchar_len(base[nbr % bs]);
	}
	else
		*len += ft_putchar_len(base[nbr]);
}
