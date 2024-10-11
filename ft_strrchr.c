/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapeckel <dapeckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:09:10 by dapeckel          #+#    #+#             */
/*   Updated: 2024/10/07 19:01:46 by dapeckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	target;
	char	*last_occurrence;

	target = (char)c;
	last_occurrence = NULL;
	while (*s)
	{
		if (*s == target)
		{
			last_occurrence = (char *)s;
		}
		s++;
	}
	if (target == '\0')
	{
		return ((char *)s);
	}
	return (last_occurrence);
}
