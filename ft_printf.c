/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:59:56 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/14 20:19:52 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int		ft_format(const char str, va_list list_args)
{
	va_arg(list_args, /*TYPE*/); // L'argument et le format
			if(str[i] = 'c')
				ft_printchar((list_args));
			else if (str[i + 1] = 's')
				ft_printstr();
			else if (str[i + 1] = 'p')
				ft_printpointeur();
			else if (str[i + 1] = 'd')
				ft_printdecimal();
			else if (str[i + 1] = 'i')
				ft_printint();
			else if (str[i + 1] = 'u')
				ft_printunsignedint();
			else if (str[i + 1] = 'x')
				ft_printhexmin();
			else if (str[i + 1] = 'X')
				ft_printhexmaj()
			else if (str[i + 1] = '%')
				ft_putchar('%');
//afficher % mais prendre en compte que s'il y a une string apres 
//elle doit aussi etre affichee.
	
}

int	ft_printf(const char *str, ...)
{
    int i;
    va_list list_args;
    
	va_start(list_args ,str);
    
	i = 0;
	// ne pas oublier de print une string sans argument
	while(str[i])
		if(str[i] == '%')
			ft_format(str[i + 1],list_args);
		else
			write(1,str[i], )	
		va_end(list_arguments);
		return(resultat)
}
