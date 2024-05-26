/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 20:44:05 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/26 18:10:32 by tborges-         ###   ########.fr       */
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
	if (n >= 10)
		count += print_nbr(n / 10);
	count += print_char((char)(n % 10 + '0'));
	return (count);
}

int	num_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	print_unsigned(unsigned int n)
{
	char	*num;
	int		len;

	if (n == 0)
		return (print_char('0'));
	len = num_len(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[--len] = n % 10 + '0';
		n /= 10;
	}
	len = print_str(num);
	free(num);
	return (len);
}
