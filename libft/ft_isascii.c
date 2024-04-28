/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:37:51 by tborges-          #+#    #+#             */
/*   Updated: 2024/04/24 19:22:42 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c;
	int	ft_isascii_result;
	int	original_iascii_result;

	c = 'A';
	ft_isascii_result = ft_isascii(c);
	original_isascii_result = isascii(c);
	printf("----------------------------\n");
	printf("Using ft_isascii: %d\n", ft_isascii_result);
	printf("----------------------------\n");
	printf("Using isascii: %d\n", original_isascii_result);
	printf("----------------------------\n");
	if (ft_isascii_result == original_isascii_result)
		printf("The results match!✅\n");
	else
		printf("The results don't match!❌\n");
	printf("----------------------------\n");
}
*/
