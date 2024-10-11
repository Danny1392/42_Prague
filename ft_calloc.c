/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapeckel <dapeckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:53:17 by dapeckel          #+#    #+#             */
/*   Updated: 2024/10/09 20:00:37 by dapeckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory_pointer;
	size_t	nb;

	nb = nmemb * size;
	if (nmemb != 0 && nb / nmemb != size)
	{
		return (NULL);
	}
	memory_pointer = malloc(nmemb * size);
	if (!memory_pointer)
	{
		return (NULL);
	}
	ft_memset(memory_pointer, 0, nmemb * size);
	return (memory_pointer);
}
