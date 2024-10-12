/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:37:10 by tborges-          #+#    #+#             */
/*   Updated: 2024/04/02 16:32:39 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1024);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;
	int	ft_isalpha_result;
	int	original_isalpha_result;

	c = 98;
	ft_isalpha_result = ft_isalpha(c);
	original_isalpha_result = isalpha(c);
	printf("----------------------------\n");
	printf("Using ft_isalpha: %d\n", ft_isalpha_result);
	printf("----------------------------\n");
	printf("Using isalpha: %d\n", original_isalpha_result);
	printf("----------------------------\n");
	if (ft_isalpha_result == original_isalpha_result)
		printf("The results match!✅\n");
	else
		printf("The results don't match!❌\n");
	printf("----------------------------\n");
}
*/
