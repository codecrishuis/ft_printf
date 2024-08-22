/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crde-la- <crde-la-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 22:19:42 by crde-la-          #+#    #+#             */
/*   Updated: 2024/08/22 19:17:25 by crde-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	ft_printf_c(char c);
int	ft_printf_s(char *s);
int	ft_printf_nb(int n);
int	ft_printf_nb_unsig(unsigned int n);
int	ft_printf_hexa(unsigned long n, char *base);
int	ft_printf_ptr(unsigned long n, char *base);

#endif
