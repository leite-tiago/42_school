/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 01:01:00 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/31 19:02:39 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * Converts a string to a long.
 */
long	ft_atol(const char *str)
{
	// long	result;
	// int		sign;

	// result = 0;
	// sign = 1;
	// while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
	// 	str++;
	// if (*str == '-' || *str == '+')
	// {
	// 	if (*str == '-')
	// 		sign = -1;
	// 	str++;
	// }
	// while (*str >= '0' && *str <= '9')
	// {
	// 	result = result * 10 + (*str - '0');
	// 	str++;
	// }
	// return (result * sign);

	long	res;
	int		i;
	int		sign;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
		res = res * 10 + (str[i++] - '0');
	return (res * sign);
}

// /**
//  * Concatenates two strings.
//  */
// char	*ft_strcat(char *dest, const char *src)
// {
// 	size_t	i;
// 	size_t	dest_len;

// 	dest_len = 0;
// 	while (dest[dest_len] != '\0')
// 		dest_len++;
// 	i = 0;
// 	while (src[i] != '\0')
// 	{
// 		dest[dest_len + i] = src[i];
// 		i++;
// 	}
// 	dest[dest_len + i] = '\0';
// 	return (dest);
// }
