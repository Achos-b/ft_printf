/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 06:50:20 by bkaztaou          #+#    #+#             */
/*   Updated: 2022/11/15 21:16:00 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_len(char *s)
{
	int	i;

	i = -1;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[++i])
		ft_putchar_len(s[i]);
	return (i);
}
