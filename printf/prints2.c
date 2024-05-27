/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 20:45:25 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/27 09:54:07 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int nbr)
{
	unsigned int	n;
	int				count;

	count = 0;
	if (nbr < 0)
	{
		count += print_char('-');
		n = (unsigned int)(-nbr);
	}
	else
		n = (unsigned int)nbr;
	count += print_unsigned(n);
	return (count);
}

int	print_unsigned(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
		count += print_unsigned(num / 10);
	count += print_char(num % 10 + '0');
	return (count);
}
