/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putundec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 06:03:17 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/11/29 23:54:50 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putundec(unsigned int nbr)
{
	long n = nbr;
	int count = 0;

	if (n < 0)
	{
		count += ft_putchr('-');
		n = -n;
	}

	if (n >= 10)
	{
		count += ft_putundec(n / 10);
	}

	count += ft_putchr(n % 10 + '0');

	return count;
}