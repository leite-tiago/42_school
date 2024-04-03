/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:38:27 by tborges-          #+#    #+#             */
/*   Updated: 2024/04/03 14:31:01 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c;
	int	ft_tolower_result;
	int	original_tolower_result;

	c = 'A';
	ft_tolower_result = ft_tolower(c);
	original_tolower_result = tolower(c);
	printf("----------------------------\n");
	printf("Using ft_tolower: %d\n", ft_tolower_result);
	printf("----------------------------\n");
	printf("Using tolower: %d\n", original_tolower_result);
	printf("----------------------------\n");
	if (ft_tolower_result == original_tolower_result)
		printf("The results match!✅\n");
	else
		printf("The results don't match!❌\n");
	printf("----------------------------\n");
}
*/
