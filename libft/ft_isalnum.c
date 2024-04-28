/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:37:36 by tborges-          #+#    #+#             */
/*   Updated: 2024/04/28 18:05:50 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z') || ('0' <= c
			&& c <= '9'))
		return (8);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c;
	int	ft_isalnum_result;
	int	original_isalnum_result;

	c = 'A';
	ft_isalnum_result = ft_isalnum(c);
	original_isalnum_result = isalnum(c);
	printf("----------------------------\n");
	printf("Using ft_isalnum: %d\n", ft_isalnum_result);
	printf("----------------------------\n");
	printf("Using isalnum: %d\n", original_isalnum_result);
	printf("----------------------------\n");
	if (ft_isalnum_result == original_isalnum_result)
		printf("The results match!✅\n");
	else
		printf("The results don't match!❌\n");
	printf("----------------------------\n");
}
*/
