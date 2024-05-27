/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:36:01 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/27 16:00:21 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char specifier, va_list *ap)
{
	if (specifier == 'c')
		return (print_char(va_arg(*ap, int)));
	else if (specifier == 's')
		return (print_str(va_arg(*ap, char *)));
	else if (specifier == 'p')
		return (print_ptr(va_arg(*ap, unsigned long)));
	else if (specifier == 'd' || specifier == 'i')
		return (print_nbr(va_arg(*ap, int)));
	else if (specifier == 'u')
		return (print_unsigned(va_arg(*ap, unsigned int)));
	else if (specifier == 'x' || specifier == 'X')
		return (print_hex(va_arg(*ap, unsigned int), specifier));
	else if (specifier == '%')
		return (print_percent());
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	if (!format)
		return (-1);
	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += print_format(*++format, &ap);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("-----------\n");
// 	ft_printf("%p\n", (void *)0);
// 	printf("%p\n", (void *)0);
// 	printf("-----------\n");
// 	ft_printf("%i\n", 2147483647);
// 	printf("%i\n", 2147483647);
// 	printf("-----------\n");
// 	ft_printf("%i\n", (int)-2147483648);
// 	printf("%i\n", (int)-2147483648);
// 	printf("-----------\n");
// 	ft_printf("%x\n", 0);
// 	printf("%x\n", 0);
// 	printf("-----------\n");
// 	ft_printf("%s\n", "");
// 	printf("%s\n", "");
// 	printf("-----------\n");
// 	ft_printf("%i\n", ft_printf(NULL));
// 	// printf("%i",printf(NULL));
// 	printf("-----------\n");
// 	ft_printf("%%\n");
// 	printf("%%\n");
// 	printf("-----------\n");
// }
