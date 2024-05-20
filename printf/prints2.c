/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:45:58 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/20 20:06:34 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** print nbr and unsigned
*/

#include "ft_printf.h"
#include "libft.h"

int	print_nbr(int nbr)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(nbr);
	len = print_str(num);
	free(num);
	return (len);
}

int	ft_num_len(unsigned int num)
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
	len = ft_num_len(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (print_str(num));
}
