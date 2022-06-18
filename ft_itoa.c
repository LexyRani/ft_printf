/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:58:43 by aceralin          #+#    #+#             */
/*   Updated: 2022/06/18 18:15:40 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

static char	*ft_n_conv(char *str, int n, long int len)
{
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	len;
	long	num;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	if (n < 0)
	{
		num = n * (-1);
		str[0] = '-';
		str = ft_n_conv(str, num, len);
	}
	else
		str = ft_n_conv(str, n, len);
	return (str);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("%s\n",ft_itoa(atoi(av[1])));
	return (0);
}*/