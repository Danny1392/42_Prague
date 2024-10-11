/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapeckel <dapeckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:06:19 by dapeckel          #+#    #+#             */
/*   Updated: 2024/10/07 19:29:47 by dapeckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*first_str;
	unsigned char	*second_str;

	first_str = (unsigned char *)s1;
	second_str = (unsigned char *)s2;
	index = 0;
	while (index < n && first_str[index] == second_str[index])
		index++;
	if (index == n)
		return (0);
	return (first_str[index] - second_str[index]);
}
