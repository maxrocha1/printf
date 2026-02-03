/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacari- <mmacari-@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:05:06 by mmacari-          #+#    #+#             */
/*   Updated: 2026/01/30 19:21:27 by mmacari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	if (!src)
		return (0);
	if (!dest && dstsize == 0)
		return (ft_strlen(src));
	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst_len < dstsize && dest[dst_len])
		dst_len++;
	if (dstsize <= dst_len)
	{
		return (dstsize + src_len);
	}
	while (dst_len + i < dstsize - 1 && src[i])
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}
