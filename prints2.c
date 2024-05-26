// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   prints2.c                                          :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/05/20 19:45:58 by tborges-          #+#    #+#             */
// /*   Updated: 2024/05/25 17:34:58 by tborges-         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// /*
// ** print nbr and unsigned
// */

// #include "ft_printf.h"

// static int	nbr_len(int n)
// {
// 	int	len;

// 	len = 0;
// 	if (n <= 0)
// 		len++;
// 	while (n != 0)
// 	{
// 		n /= 10;
// 		len++;
// 	}
// 	return (len);
// }

// char	*ft_itoa(int n)
// {
// 	unsigned int	nbr;
// 	int				sign;
// 	int				len;
// 	char			*str;

// 	sign = 0;
// 	nbr = n;
// 	if (n < 0)
// 	{
// 		sign = 1;
// 		nbr = -n;
// 	}
// 	len = nbr_len(n);
// 	str = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!str)
// 		return (0);
// 	str[len] = '\0';
// 	while (len--)
// 	{
// 		str[len] = '0' + (nbr % 10);
// 		nbr /= 10;
// 	}
// 	if (sign)
// 		str[0] = '-';
// 	return (str);
// }

// int	print_nbr(int num)
// {
// 	int		len;
// 	char	*n;

// 	len = 0;
// 	n = ft_itoa(num);
// 	len = print_str(n);
// 	free(n);
// 	return (len);
// }

// int	num_len(unsigned int num)
// {
// 	int	len;

// 	len = 0;
// 	while (num != 0)
// 	{
// 		len++;
// 		num = num / 10;
// 	}
// 	return (len);
// }

// int	print_unsigned(unsigned int n)
// {
// 	char	*num;
// 	int		len;

// 	if (n == 0)
// 		return (print_char('0'));
// 	len = num_len(n);
// 	num = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!num)
// 		return (0);
// 	num[len] = '\0';
// 	while (n != 0)
// 	{
// 		num[len - 1] = n % 10 + '0';
// 		n /= 10;
// 		len--;
// 	}
// 	len = print_str(num);
// 	free(num);
// 	return (len);
// }
