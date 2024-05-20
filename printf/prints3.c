/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:53:36 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/20 20:07:33 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** print hex and percent
*/

#include "ft_printf.h"

int	ft_hex_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		put_hex(num / 16, format);
		put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			print_char((num + '0'));
		else
		{
			if (format == 'x')
				print_char((num - 10 + 'a'));
			if (format == 'X')
				print_char((num - 10 + 'A'));
		}
	}
}

int	print_hex(unsigned int num, const char specifier)
{
	if (num == 0)
		return (print_char('0'));
	else
		put_hex(num, specifier);
	return (hex_len(num));
}

int	print_percent(void)
{
	return (print_char('%'));
}
