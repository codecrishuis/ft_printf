/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crde-la- <crde-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 20:23:42 by crde-la-          #+#    #+#             */
/*   Updated: 2024/08/22 19:22:34 by crde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (s == NULL)
		s = "(null)";
	while (s[i])
	{
		if (write (1, &s[i], 1) == 1)
		{
			i++;
			len ++;
		}
		else
			return (-1);
	}
	return (len);
}

/*int main(void)
{
    char *s = NULL;
    int res;

    res = ft_printf_s(s);
    printf("\nHa ido %d\n", res);

    return (0);
}*/
