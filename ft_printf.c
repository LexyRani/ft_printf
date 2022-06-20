/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:59:56 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/20 18:51:11 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int ft_print_char (int c)
{
	write(1 , &c , 1);
	return(0);
}

int		ft_format(const char type, va_list list_args)
{
		if(type == 'c')
			ft_print_char(va_arg(list_args, int));
		else if (type == 's')
			ft_print_str(va_arg(list_args, char *));
		//else if (type == 'p')
			//ft_print_ptr(va_arg(list_args, unsigned long long));
		else if (type == 'd' || type == 'i' )
			ft_print_nbr(va_arg(list_args, int));
		else if (type == 'u')
			ft_print_unsigned(va_arg(list_args, unsigned int));
		else if (type == 'x' || type == 'X')
			ft_print_hex(va_arg(list_args, unsigned int), type); //convertir en hexadecimal
		else if (type == '%')
			ft_putchar('%');
		return(0);	
}

int	ft_printf(const char *str, ...)
{
    int i;
    va_list list_args;
    //int	len; //gere la longueur de la chaine
	va_start(list_args ,str);
    
	i = 0;
	//len = 0;
	
	while(str[i])
	{
		if (str[i] == '%')
		{
			ft_format(str[i + 1],list_args);
			i++;
		}
		else
			ft_print_char(str[i]);
		i++;
	}
	va_end(list_args);
	return(0);
}

int	main()
{
	//int a = 'c';
	//int	b = -1 ;
	int c = 0;
	//char d = '%';
	//char *str = "abced";
	printf("printf:  %x %X\n salut \n",c,c);
	ft_printf("ft_printf: %x %X\n salut \n",c,c);
	
	return(0);
}