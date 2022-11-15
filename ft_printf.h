/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 07:04:49 by bkaztaou          #+#    #+#             */
/*   Updated: 2022/11/15 21:20:03 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

size_t	ft_strlen(char *s);
int		ft_putchar_len(char c);
int		ft_putstr_len(char *s);
void	ft_putnbr_len(int nbr, int *len);
void	ft_putunbr_len(unsigned int nbr, int *len);
void	ft_printres(char c, va_list args, int *len);
int		ft_printf(const char *s, ...);
void	ft_puthexa(unsigned int nbr, char *base, int *len);
void	ft_putadress(unsigned long nbr, int *len);

#endif
