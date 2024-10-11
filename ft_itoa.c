/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapeckel <dapeckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:56:37 by dapeckel          #+#    #+#             */
/*   Updated: 2024/10/07 19:16:34 by dapeckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(unsigned int n)
{
	size_t	count;

	count = 1;
	while (n / 10 > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*result_str;
	unsigned int	abs_value;
	size_t			index;
	size_t			total_digits;

	if (n < 0)
		abs_value = (unsigned int)(-n);
	else
		abs_value = (unsigned int)n;
	total_digits = count_digits(abs_value);
	result_str = malloc((total_digits + (n < 0) + 1) * sizeof(char));
	if (!result_str)
		return (NULL);
	if (n < 0)
		result_str[0] = '-';
	index = total_digits;
	while (index > 0)
	{
		result_str[index-- + (n < 0) - 1] = (abs_value % 10) + '0';
		abs_value /= 10;
	}
	result_str[total_digits + (n < 0)] = '\0';
	return (result_str);
}
