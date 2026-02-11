/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxrocha <maxrocha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 17:09:25 by mmacari-          #+#    #+#             */
/*   Updated: 2026/02/11 16:14:57 by maxrocha         ###   ########.fr       */
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
	return len;
}

int	print_pointer(void *ptr)
{
	int len;
	unsigned long n;

	len = 0;
	len += write(1, "0x", 2);
	if (!ptr)
		return len + write(1, "0", 1);
	n = (unsigned long)ptr;
	len += ft_putptr_hex(n);
	return len;
}

