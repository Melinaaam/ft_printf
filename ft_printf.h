/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:56:52 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/17 09:48:48 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putnbr_base(char *base, int n);
int	ft_putunsi_dec(unsigned int nb);
int	ft_strlen(char *s);

int	ft_attributions(va_list argument, char c);
int	ft_printf(const char *s, ...);
int	ft_putptr(void *ptr, char *base, int x);

#endif
