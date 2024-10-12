/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 20:44:05 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/26 23:16:46 by tborges-         ###   ########.fr       */
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
	char	buffer[17];
	char	*hex_digits;
	int		i;

	count = 0;
	hex_digits = "0123456789abcdef";
	i = 0;
	count += print_str("0x");
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
