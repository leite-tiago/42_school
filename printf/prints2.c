/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:45:58 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/25 17:07:45 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** print nbr and unsigned
*/

#include "ft_printf.h"

int	print_nbr(int nbr)
{
	int		i;
	int		end;
	char	temp;
	char	buffer[12];
	int		start;

	i = 0;
	if (nbr == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	if (nbr < 0)
	{
		buffer[i++] = '-';
		nbr = -nbr;
	}
	start = i;
	do
	{
		buffer[i++] = '0' + nbr % 10;
		nbr /= 10;
	} while (nbr > 0);
	end = i - 1;
	while (start < end)
	{
		temp = buffer[start];
		buffer[start] = buffer[end];
		buffer[end] = temp;
		start++;
		end--;
	}
	return (write(1, buffer, i));
}

int	num_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
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
		num[len - 1] = n % 10 + '0';
		n /= 10;
		len--;
	}
	len = print_str(num);
	free(num);
	return (len);
}