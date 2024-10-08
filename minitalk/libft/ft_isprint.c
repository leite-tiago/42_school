/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:38:03 by tborges-          #+#    #+#             */
/*   Updated: 2024/04/03 14:24:39 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (16384);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c;
	int	ft_isprint_result;
	int	original_isprint_result;

	c = 'A';
	ft_isprint_result = ft_isprint(c);
	original_isprint_result = isprint(c);
	printf("----------------------------\n");
	printf("Using ft_isprint: %d\n", ft_isprint_result);
	printf("----------------------------\n");
	printf("Using isprint: %d\n", original_isprint_result);
	printf("----------------------------\n");
	if (ft_isprint_result == original_isprint_result)
		printf("The results match!✅\n");
	else
		printf("The results don't match!❌\n");
	printf("----------------------------\n");
}
*/
