/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiki <bchiki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:08:23 by bchiki            #+#    #+#             */
/*   Updated: 2024/11/27 21:08:26 by bchiki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hexa(unsigned long n, char format)
{
	char	*b;
	int		number;

	number = 0;
	if (format == 'x')
		b = "0123456789abcdef";
	else
		b = "0123456789ABCDEF";
	if (n >= 16)
		number += ft_put_hexa(n / 16, format);
	number += ft_putchar(b[n % 16]);
	return (number);
}
