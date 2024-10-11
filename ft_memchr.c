/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapeckel <dapeckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:06:11 by dapeckel          #+#    #+#             */
/*   Updated: 2024/10/07 19:24:01 by dapeckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*byte_pointer;

	index = 0;
	byte_pointer = (unsigned char *)s;
	while (index < n)
	{
		if (byte_pointer[index] == (unsigned char)c)
		{
			return ((void *)(byte_pointer + index));
		}
		index++;
	}
	return (NULL);
}
