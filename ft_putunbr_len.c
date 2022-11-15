/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:36:13 by bkaztaou          #+#    #+#             */
/*   Updated: 2022/11/15 21:00:39 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr_len(unsigned int nbr, int *len)
{
	if (nbr > 9)
	{
		ft_putunbr_len(nbr / 10, len);
		*len += ft_putchar_len(nbr % 10 + '0');
	}
	else
		*len += ft_putchar_len(nbr + '0');
}
