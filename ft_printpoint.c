/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 05:35:23 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/11/29 23:54:33 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printpoint(unsigned long point)
{
	unsigned long count = 0;

	if (point == 0)
	{
		ft_putstr("(nil)");
		return 5;
	}

	if (point < 16)
	{
		count += ft_putstr("0x");
		count += ft_putchr("0123456789abcdef"[point % 16]);
		return (count);
	}

	if (point >= 16)
	{
		count += ft_printpoint(point / 16);
		count += ft_putchr("0123456789abcdef"[point % 16]);
	}

	return count;
}