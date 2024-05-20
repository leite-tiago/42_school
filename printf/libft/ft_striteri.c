/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 20:50:58 by tborges-          #+#    #+#             */
/*   Updated: 2024/04/03 18:36:16 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}

/*
#include <stdio.h>
#include <string.h>

void	uppercase(unsigned int index, char *ch)
{
	*ch = ft_toupper(*ch);
}

int	main(void)
{
	char	str1[] = "hello";

	printf("----------------------------\n");
	printf("Before ft_striteri(): %s\n", str1);
	ft_striteri(str1, uppercase);
	printf("After ft_striteri(): %s\n", str1);
	printf("----------------------------\n");
}
*/
