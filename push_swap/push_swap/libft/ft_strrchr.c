/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:36:20 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/09 14:08:13 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hello, world!";
	char	*ft_strrchr_result;
	char	*original_strrchr_result;

	ft_strrchr_result = ft_strrchr(str, 'o');
	original_strrchr_result = strrchr(str, 'o');
	printf("----------------------------\n");
	printf("Using ft_strrchr: %s\n", ft_strrchr_result);
	printf("----------------------------\n");
	printf("Using strrchr: %s\n", original_strrchr_result);
	printf("----------------------------\n");
	if (ft_strrchr_result == original_strrchr_result)
		printf("The results match!✅\n");
	else
		printf("The results don't match!❌\n");
	printf("----------------------------\n");
}
*/
