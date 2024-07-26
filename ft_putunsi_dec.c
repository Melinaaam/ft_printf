/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsi_dec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 19:15:17 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/17 09:51:26 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsi_dec(unsigned int nb)
{
	int		count;

	count = 0;
	if (nb > 9)
		count = count + ft_putnbr(nb / 10);
	count = count + ft_putchar((nb % 10) + '0');
	return (count);
}
