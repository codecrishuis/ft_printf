/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nb_unsig.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crde-la- <crde-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:26:45 by crde-la-          #+#    #+#             */
/*   Updated: 2024/08/17 20:45:16 by crde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_nb_unsig(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
		len += ft_printf_nb((n / 10));
	if (ft_printf_c((n % 10) + '0') == -1)
		return (-1);
	len++;
	return (len);
}
/*int main(void)
{
  unsigned int n;
  int	res;
  n = -234894323;
  res = ft_printf_nb(n);
  printf("\nSe han impreso %d caracteres correctamente\n", res);
  return (0);
}*/
