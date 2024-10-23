/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:36:57 by tborges-          #+#    #+#             */
/*   Updated: 2024/04/24 19:22:03 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	res;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * s);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	str[] = "    	-42Hello, world!";
	int		ft_atoi_result;
	int		original_atoi_result;

	ft_atoi_result = ft_atoi(str);
	original_atoi_result = atoi(str);
	printf("----------------------------\n");
	printf("Using ft_atoi: %i\n", ft_atoi_result);
	printf("----------------------------\n");
	printf("Using atoi: %i\n", original_atoi_result);
	printf("----------------------------\n");
	if (ft_atoi_result == original_atoi_result)
		printf("The results match!✅\n");
	else
		printf("The results don't match!❌\n");
	printf("----------------------------\n");
}
*/
