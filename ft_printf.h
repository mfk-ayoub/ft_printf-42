/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:12:40 by ayel-mou          #+#    #+#             */
/*   Updated: 2023/11/29 23:51:09 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


int		ft_printf(const char *str, ...);
int	    ft_putstr(char *str);
int 	ft_putnbr(int nbr);
int 	ft_putchr(char c);
int     ft_printhex(unsigned int hex);
int     ft_printHEX(size_t hex);
int     ft_printpoint(unsigned long point);
int     ft_putundec(unsigned int nbr);

#endif