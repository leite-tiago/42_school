/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:38:18 by tborges-          #+#    #+#             */
/*   Updated: 2024/04/03 14:29:02 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c;
	int	ft_toupper_result;
	int	original_toupper_result;

	c = 'a';
	ft_toupper_result = ft_toupper(c);
	original_toupper_result = toupper(c);
	printf("----------------------------\n");
	printf("Using ft_toupper: %d\n", ft_toupper_result);
	printf("----------------------------\n");
	printf("Using toupper: %d\n", original_toupper_result);
	printf("----------------------------\n");
	if (ft_toupper_result == original_toupper_result)
		printf("The results match!✅\n");
	else
		printf("The results don't match!❌\n");
	printf("----------------------------\n");
}
*/
