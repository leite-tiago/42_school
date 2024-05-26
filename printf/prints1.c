/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 20:44:05 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/26 22:37:08 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int c)
{
	return (write(1, &c, 1));
}

int	print_str(char *str)
{
	int	count;

	if (!str)
		return (write(1, "(null)", 6));
	count = 0;
	while (str[count])
	{
		count += print_char(str[count]);
	}
	return (count);
}

int	print_ptr(unsigned long long num)
{
	int		count;

	count = 0;
	count += print_str("0x");
	count += print_hex(num, 'x');
	return (count);
}
