/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:10:22 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/25 16:53:46 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** print char, str and ptr
*/

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

int	ptr_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num)
	{
		len++;
		num /= 16;
	}
	return (len);
}

void	put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		put_ptr(num / 16);
		put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			print_char((num + '0'));
		else
			print_char((num - 10 + 'a'));
	}
}

int	print_ptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	count += print_str("0x");
	if (ptr == 0)
		count += print_char('0');
	else
	{
		put_ptr(ptr);
		count += ptr_len(ptr);
	}
	return (count);
}