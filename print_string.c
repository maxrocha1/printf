/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxrocha <maxrocha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:44:47 by mmacari-          #+#    #+#             */
/*   Updated: 2026/02/11 16:55:40 by maxrocha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	print_string(char *s)
{
	size_t	len;

	if (!s)
		s = "(null)";
	len = 0;
	while (*s)
	{
		len += print_char(*s);
		s++;
	}
	return (len);
}
