/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printHEX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 05:27:41 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/11/29 23:54:24 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printHEX(size_t hex)
{
	int count;

	count = 0;
	if (hex < 16)
	{
		count += ft_putchr("0123456789ABCDEF"[hex%16]);
		return (count);
	}
	if (hex >= 16)
	{
	   count += ft_printHEX(hex / 16);
	   count += ft_putchr("0123456789ABCDEF"[hex%16]);
	   
	}
	 return (count);
}