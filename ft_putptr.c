/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 19:17:45 by memotyle          #+#    #+#             */
/*   Updated: 2024/06/17 09:51:18 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr, char *base, int x)
{
	int					count;
	unsigned long long	ptr_nb;

	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	count = 0;
	if (x == 0)
	{
		count = ft_putstr("0x");
		x++;
	}
	ptr_nb = (unsigned long long)ptr;
	if (ptr_nb >= 16)
		count += ft_putptr((void *)(ptr_nb / 16), base, x);
	count += ft_putchar(base[ptr_nb % 16]);
	return (count);
}
