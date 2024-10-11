/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapeckel <dapeckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:53:58 by dapeckel          #+#    #+#             */
/*   Updated: 2024/10/07 19:25:31 by dapeckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	str_len;
	char	*ptr;

	str_len = ft_strlen(s);
	ptr = malloc((str_len * sizeof(char)) + 1);
	if (!ptr)
		return (ptr);
	ptr[str_len] = '\0';
	while (str_len-- > 0)
		ptr[str_len] = s[str_len];
	return (ptr);
}
