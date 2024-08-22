/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crde-la- <crde-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:26:56 by crde-la-          #+#    #+#             */
/*   Updated: 2024/08/17 16:29:39 by crde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_nb(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		if (ft_printf_c('-') == -1 || ft_printf_c('2') == -1)
			return (-1);
		n = 147483648;
		len += 2;
	}
	if (n < 0)
	{
		if (ft_printf_c('-') == -1)
			return (-1);
		n *= -1;
		len += 1;
	}
	if (n >= 10)
		len += ft_printf_nb((n / 10));
	if (ft_printf_c((n % 10) + '0') == -1)
		return (-1);
	len++;
	return (len);
}
/*int main(void)
{
  int n;
  int	res;
  n = -234894323;
  res = ft_printf_nb(n);
  printf("\nSe han impreso %d caracteres correctamente\n", res);
  return (0);
}*/
