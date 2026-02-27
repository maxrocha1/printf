/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacari- <mmacari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 17:09:25 by mmacari-          #+#    #+#             */
/*   Updated: 2026/02/23 10:14:24 by mmacari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_putptr_hex(unsigned long n)
{
	char	*hex;
	int		len;

	len = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		len += ft_putptr_hex(n / 16);
	len += write(1, &hex[n % 16], 1);
	return (len);
}

int	print_pointer(void *ptr)
{
	int				len;
	unsigned long	n;

	if (!ptr)
		return (write(1, "(nil)", 5));
	len = 0;
	len += write(1, "0x", 2);
	n = (unsigned long)ptr;
	len += ft_putptr_hex(n);
	return (len);
}
