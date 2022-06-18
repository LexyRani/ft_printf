/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:59:56 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/18 18:58:21 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int ft_print_char (int c)
{
	write(1 , &c , 1);
	return(1);
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
		//else if (type == 'u')
			//ft_print_unsigned(va_arg(list_args, unsigned int));
		//else if (type == 'x' || type == 'X')
			//ft_print_hex(va_arg(list_args, unsigned int)); //convertir en hexadecimal
		//else if (type == '%')
			//ft_putchar('%');
//afficher % mais prendre en compte que s'il y a une string apres 
//elle doit aussi etre affichee.
			//return(ft_len(list_args));	
}

int	ft_printf(const char *str, ...)
{
    int i;
    va_list list_args;
    int	len; //gere la longueur de la chaine
	va_start(list_args ,str);
    
	i = 0;
	len = 0;
	// ne pas oublier de print une string sans argument
	if(!str)
		return(0);
	while(str[i])
	{
		if(str[i] == '%')
			ft_format(str[i + 1],list_args);
		else
			write(1,str[i],1);	
	}
	va_end(list_args);
	return(len);
}

int	main()
{
	int a = 1;
	int	b = 1.2 ;
	int c = 25698415;
	char *str = "abced";
	//ft_printf("ft_print: %d\n%d\n%d\n%s\n",a,b,c,str);
	printf("printf: %x\n%X\n%s\n",a,c,str);
	return(0);
}