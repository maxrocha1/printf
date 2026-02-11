/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacari- <mmacari-@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 17:09:25 by mmacari-          #+#    #+#             */
/*   Updated: 2026/02/10 16:41:45 by mmacari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static size_t	convert_ptr_to_hex(unsigned long n, char *buffer)
{
	size_t			i;
	unsigned int	digit;

	i = 0;
	while (n > 0)
	{
		digit = n % 16;
		if (digit < 10)
			buffer[i] = '0' + digit;
		else
			buffer[i] = 'a' + (digit - 10);
		n = n / 16;
		i++;
	}
	return (i);
}

int	print_pointer(void *ptr)
{
	size_t			len;
	char			buffer[17];
	size_t			i;
	unsigned long	n;

	len = 0;
	i = 0;
	write(1, "0x", 2);
	len += 2;
	if (!ptr)
	{
		write(1, "0", 1);
		return (len + 1);
	}
	n = (unsigned long)ptr;
	i = convert_ptr_to_hex(n, buffer);
	while (i > 0)
	{
		write(1, &buffer[i - 1], 1);
		len++;
		i--;
	}
	return (len);
}
