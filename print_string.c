/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacari- <mmacari-@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:44:47 by mmacari-          #+#    #+#             */
/*   Updated: 2026/02/06 17:05:00 by mmacari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

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
