/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacari- <mmacari-@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:32:36 by mmacari-          #+#    #+#             */
/*   Updated: 2026/01/30 18:25:23 by mmacari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	fill_itoa(char *res, long nbr, size_t len)
{
	size_t	i;

	if (nbr == 0)
	{
		res[0] = '0';
		return ;
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	i = len - 1;
	while (nbr)
	{
		res[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	long	nbr;
	size_t	len;
	char	*res;

	nbr = n;
	len = count_len(nbr);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	fill_itoa(res, nbr, len);
	return (res);
}
