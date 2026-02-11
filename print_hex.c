/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacari- <mmacari-@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:23:51 by mmacari-          #+#    #+#             */
/*   Updated: 2026/02/06 17:03:11 by mmacari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static size_t	convert_buffer_to_hex(unsigned int n, char *buffer, char format)
{
	size_t			i;
	unsigned int	digit;

	i = 0;
	while (n > 0)
	{
		digit = n % 16;
		if (digit < 10)
			buffer[i] = '0' + digit;
		else if (format == 'x')
			buffer[i] = 'a' + (digit - 10);
		else if (format == 'X')
			buffer[i] = 'A' + (digit - 10);
		n = n / 16;
		i++;
	}
	return (i);
}

int	print_hex(unsigned int n, char format)
{
	size_t			len;
	size_t			i;
	char			buffer[9];

	if (n == 0)
		return (write(1, "0", 1));
	i = convert_buffer_to_hex(n, buffer, format);
	len = i;
	while (i > 0)
	{
		write(1, &buffer[i - 1], 1);
		i--;
	}
	return (len);
}
