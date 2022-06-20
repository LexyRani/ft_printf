/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:53:04 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/20 18:54:13 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int ft_print_unsigned( unsigned int nb)
{
    if (nb > 9)
    {
        ft_print_unsigned(nb / 10);
        ft_print_unsigned(nb % 10);
    }		
    else
        ft_putchar(nb + '0');
    return(0);
}