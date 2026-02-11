/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacari- <mmacari-@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 18:42:31 by mmacari-          #+#    #+#             */
/*   Updated: 2026/02/04 18:48:39 by mmacari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static size_t	convert_int_to_buffer(unsigned int n, char *buffer)
{
	size_t	i;
	int		digit;

	i = 0;
	while (n > 0)
	{
		digit = n % 10;
		buffer[i] = '0' + digit;
		n = n / 10;
		i++;
	}
	return (i);
}

int	print_unsigned(unsigned int n)
{
	size_t	len;
	char	buffer[12];
	size_t	i;

	len = 0;
	if (n == 0)
		return (write(1, "0", 1));
	i = convert_int_to_buffer(n, buffer);
	while (i > 0)
	{
		write(1, &buffer[i - 1], 1);
		len++;
		i--;
	}
	return (len);
}
