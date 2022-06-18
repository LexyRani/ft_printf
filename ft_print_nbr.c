/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:52:50 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/18 18:14:55 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int ft_print_nbr( int n) // nombre decimal ou entier de base 10
{
    int len;
    char    integer;
    integer = itoa(n); //conversion de l entier en char
    
    len = ft_print_str( integer); //impression de la chaine.
    free(len);//malloc present dans le itoa
    return (len);
}