/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:37:16 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/21 14:51:23 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int ft_printf(const char *, ...);
int	ft_print_str(char *s);
int ft_print_nbr( int n);
int ft_print_unsigned( unsigned int nb);

int	ft_putchar(char c);
int ft_print_hex( unsigned int nbr, char type);
int	ft_print_ptr(unsigned long long nbr); 

#endif