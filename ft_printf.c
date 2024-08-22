/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crde-la- <crde-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:41:31 by crde-la-          #+#    #+#             */
/*   Updated: 2024/08/22 19:33:11 by crde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_functions(char format, va_list vargs)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = ft_printf_c(va_arg(vargs, int));
	else if (format == 's')
		len = ft_printf_s(va_arg(vargs, char *));
	else if (format == 'p')
		len = ft_printf_ptr(va_arg(vargs, unsigned long), "0123456789abcdef");
	else if (format == 'd' || format == 'i')
		len = ft_printf_nb(va_arg(vargs, int));
	else if (format == 'u')
		len = ft_printf_nb_unsig(va_arg(vargs, unsigned int));
	else if (format == 'x')
		len = ft_printf_hexa(va_arg(vargs, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		len = ft_printf_hexa(va_arg(vargs, unsigned int), "0123456789ABCDEF");
	else if (format == '%')
		len = ft_printf_c('%');
	else
		return (ft_printf_c('%'), 1);
	if (len == -1)
		return (-1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	vargs;
	int		i;
	int		count;
	int		len;

	i = 0;
	count = 0;
	va_start(vargs, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len = ft_functions(format[i + 1], vargs);
			i += 2;
		}
		else
		{
			len = ft_printf_c(format[i]);
			i++;
		}
		if (len == -1)
			return (va_end(vargs), -1);
		count += len;
	}
	return (va_end(vargs), count);
}
