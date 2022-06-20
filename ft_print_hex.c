/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:52:53 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/20 18:54:41 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"


int ft_change_base(int nbr, char *base , int bsize)
{
    int res;

    res = 0;
    if(nbr > 16)
       res += ft_change_base( nbr/ 16, base, 16);
    res += ft_putchar(base[nbr % bsize]);
    return (res);
}

int ft_print_hex( unsigned int nbr, char type)
{
    if (type == 'x')
        ft_change_base(nbr, "0123456789abcdef", 16);
    else if (type == 'X')
        ft_change_base(nbr, "0123456789ABCDEF", 16);
    return(0);
}