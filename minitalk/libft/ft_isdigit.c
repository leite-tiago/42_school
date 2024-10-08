/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:37:22 by tborges-          #+#    #+#             */
/*   Updated: 2024/04/24 19:21:26 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (2048);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c;
	int	ft_isdigit_result;
	int	original_isdigit_result;

	c = 48;
	ft_isdigit_result = ft_isdigit(c);
	original_isdigit_result = isdigit(c);
	printf("----------------------------\n");
	printf("Using ft_isdigit: %d\n", ft_isdigit_result);
	printf("----------------------------\n");
	printf("Using isdigit: %d\n", original_isdigit_result);
	printf("----------------------------\n");
	if (ft_isdigit_result == original_isdigit_result)
		printf("The results match!✅\n");
	else
		printf("The results don't match!❌\n");
	printf("----------------------------\n");
}
*/
