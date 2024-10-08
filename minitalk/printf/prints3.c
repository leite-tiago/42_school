/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:53:36 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/26 23:15:26 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** print hex and percent
*/

#include "ft_printf.h"

int	print_hex(unsigned int num, const char specifier)
{
	int		count;
	char	buffer[17];
	char	*hex_digits;
	int		i;

	if (specifier == 'X')
		hex_digits = "0123456789ABCDEF";
	else
		hex_digits = "0123456789abcdef";
	count = 0;
	i = 0;
	if (num == 0)
		count += print_char('0');
	else
	{
		while (num != 0)
		{
			buffer[i++] = hex_digits[num % 16];
			num /= 16;
		}
		while (i > 0)
			count += print_char(buffer[--i]);
	}
	return (count);
}

int	print_percent(void)
{
	return (print_char('%'));
}
