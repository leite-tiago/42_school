/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr&uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 20:45:25 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/25 20:56:49 by tborges-         ###   ########.fr       */
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
		print_char('-');
		n = -nbr;
	}
	else
		n = (unsigned int)nbr;
	if (n < 10)
		count += print_char(n % 10 + 48);
	print_nbr(n / 10);
	return count;
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
