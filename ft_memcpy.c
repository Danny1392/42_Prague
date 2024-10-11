/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapeckel <dapeckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:06:28 by dapeckel          #+#    #+#             */
/*   Updated: 2024/10/07 19:00:10 by dapeckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destination;
	char	*source;

	destination = dest;
	source = (char *)src;
	if (!destination && !source)
		return (NULL);
	while (n--)
		*destination++ = *source++;
	return (dest);
}
