/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:53:04 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/21 17:54:30 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int ft_print_unsigned( unsigned int nb)
{
    int len;
    
    len = 0;
    if (nb > 9)
    {
        len += ft_print_unsigned(nb / 10);
        len += ft_print_unsigned(nb % 10);
    }		
    else
        len += ft_putchar(nb + '0');
    return(len);
}