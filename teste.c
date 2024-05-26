/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 19:21:50 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/26 22:13:00 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	count;

	printf("////////////////////\n");
	ft_printf("mine:\n");
	count = ft_printf("%p\n", NULL); // alterar aqui
	ft_printf("my count: %i\n", count);
	printf("////////////////////\n");
	printf("original:\n");
	count = printf("%p\n", NULL); // alterar aqui
	ft_printf("original count: %i\n", count);
	printf("////////////////////\n");
}
