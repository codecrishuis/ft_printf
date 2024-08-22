/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crde-la- <crde-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:01:27 by crde-la-          #+#    #+#             */
/*   Updated: 2024/08/17 18:17:17 by crde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(unsigned long n, char *base)
{
	int	len;
	int	hexa_len;

	len = 0;
	hexa_len = 0;
	if (n == 0)
	{
		if (write (1, "(nil)", 5) != 5)
			return (-1);
		return (5);
	}
	else
	{
		if (write (1, "0x", 2) != 2)
			return (-1);
		len += 2;
		hexa_len = ft_printf_hexa(n, base);
		if (hexa_len == -1)
			return (-1);
		len += hexa_len;
		return (len);
	}
}

/*int main(void)
{
    char    *s;
    char    *s1;
    unsigned long  n;
    unsigned long   n1;
    int res;
    int res1;
	char	*base;
    
    base = "0123456789abcdef";
	s = "Cadenitapipu";
    s1 = "Estaesotra";
    n = (unsigned long)s;
    n1 = (unsigned long)s1;
    res = ft_printf_ptr(n, base);
	ft_printf_c('\n');
    res1 = ft_printf_ptr(n1, base);
	ft_printf_c('\n');
	
	printf("Este puntero es: %p\n", (void*)s);
    printf("Este puntero es: %p\n", (void*)s1);
    printf("En mi función sale: %d\n", res);
    printf("El segundo puntero en mi función sale: %d\n", res1);

    return(0);
}*/