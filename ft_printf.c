/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacari- <mmacari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:42:24 by mmacari-          #+#    #+#             */
/*   Updated: 2026/02/23 10:11:18 by mmacari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

void	handle_format(char spec, va_list args, int *len)
{
	unsigned int	n;

	if (spec == '%')
		*len += print_percent();
	else if (spec == 'd' || spec == 'i')
		*len += print_number(va_arg(args, int));
	else if (spec == 's')
		*len += print_string(va_arg(args, char *));
	else if (spec == 'c')
		*len += print_char(va_arg(args, int));
	else if (spec == 'x' || spec == 'X')
		*len += print_hex(va_arg(args, unsigned int), spec);
	else if (spec == 'p')
		*len += print_pointer(va_arg(args, void *));
	else if (spec == 'u')
	{
		n = va_arg(args, unsigned int);
		*len += print_unsigned(n);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		len;

	va_start(args, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			handle_format(format[i], args, &len);
			i++;
		}
		else
		{
			len += print_char(format[i]);
			i++;
		}
	}
	va_end(args);
	return (len);
}
