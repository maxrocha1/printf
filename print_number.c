/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxrocha <maxrocha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:02:01 by mmacari-          #+#    #+#             */
/*   Updated: 2026/02/11 17:00:01 by maxrocha         ###   ########.fr       */
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

int	print_number(int n)
{
	size_t			len;
	char			buffer[12];
	unsigned int	n_abs;
	size_t			i;

	len = 0;
	if (n == 0)
		return (write(1, "0", 1));
	if (n < 0)
	{
		write(1, "-", 1);
		len++;
		n_abs = -n;
	}
	else
		n_abs = n;
	i = convert_int_to_buffer(n_abs, buffer);
	while (i > 0)
	{
		write(1, &buffer[i - 1], 1);
		len++;
		i--;
	}
	return (len);
}
