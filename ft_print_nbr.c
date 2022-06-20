/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:52:50 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/20 18:53:02 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int	ft_putchar(char c)
{
    return (write(1, &c, 1));
}

int ft_print_nbr( int nb) // nombre decimal ou entier de base 10
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return (0);
    }
    if (nb < 0)
    {
        nb = nb * (-1);
        ft_putchar('-');
    }
    if (nb > 9)
    {
        ft_print_nbr(nb / 10);
        ft_print_nbr(nb % 10);
    }		
    else
    {
        ft_putchar(nb + '0');
    }
    return (0);
}
    
    /*int len;
    char    integer;
    integer = itoa(n); //conversion de l entier en char
    
    len = ft_print_str( integer); //impression de la chaine.
    free(len);//malloc present dans le itoa
    return (len);
}*/