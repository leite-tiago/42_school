/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:35:22 by tborges-          #+#    #+#             */
/*   Updated: 2024/03/08 14:24:31 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello, world!";

    int ft_strlen_result = ft_strlen(str);
    int original_strlen_result = strlen(str);
	printf("----------------------------\n");
    printf("Using ft_strlen:\n");
    printf("Length of the string: %d\n", ft_strlen_result);
	printf("----------------------------\n");
    printf("Using strlen:\n");
    printf("Length of the string: %d\n", original_strlen_result);
	printf("----------------------------\n");
    if (ft_strlen_result == original_strlen_result)
        printf("The lengths match!\n");
    else
        printf("The lengths don't match!\n");
	printf("----------------------------\n");
}
*/
