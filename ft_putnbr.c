/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:46:41 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/17 09:51:15 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count = count + ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
		count = count + ft_putnbr(nb / 10);
	count = count + ft_putchar((nb % 10) + '0');
	return (count);
}
