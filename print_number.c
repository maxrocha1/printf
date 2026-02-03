/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacari- <mmacari-@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:02:01 by mmacari-          #+#    #+#             */
/*   Updated: 2026/02/03 17:40:11 by mmacari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	print_number(int n)
{
	size_t			len;
	char			buffer[12];
	unsigned int	n_abs;
	size_t			i;
	int				digit;

	len = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		len++;
		n_abs = -n;
	}
	else
		n_abs = n;
	i = 0;
	while (n_abs > 0)
	{
		digit
	}
}
