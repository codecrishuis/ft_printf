/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crde-la- <crde-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:32:37 by crde-la-          #+#    #+#             */
/*   Updated: 2024/08/22 18:12:38 by crde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hexa(unsigned long n, char *base)
{
	int		i;
	int		len;
	char	rest[17];

	i = 0;
	len = 0;
	if (n == 0)
	{
		if (ft_printf_c('0') == -1)
			return (-1);
		len++;
	}
	while (n)
	{
		rest[i++] = base[n % 16];
		n = n / 16;
	}
	while (i > 0)
	{
		if (ft_printf_c(rest[--i]) == -1)
			return (-1);
		len++;
	}
	return (len);
}
/*
int main (void)
{
    unsigned long    n;
    int res;
    char *base;
	base = "0123456789abcdef";
	n = 12345678910;
    res = ft_printf_hexa(n, base);
    printf("\nEl número de caracteres impresos correctamente es %d\n", res);
	return (0);
}*/
