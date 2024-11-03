/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:36:01 by tborges-          #+#    #+#             */
/*   Updated: 2024/05/25 17:35:15 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// %c Prints a single character.
// %s Prints a string (as defined by the common C convention).
// %p The void * pointer argument has to be printed in hexadecimal format.
// %d Prints a decimal (base 10) number.
// %i Prints an integer in base 10.
// %u Prints an unsigned decimal (base 10) number.
// %x Prints a number in hexadecimal (base 16) lowercase format.
// %X Prints a number in hexadecimal (base 16) uppercase format.
// %% Prints a percent sign.

int	print_format(char specifier, va_list *ap)
{
	if (specifier == 'c')
		return (print_char(va_arg(*ap, int)));
	else if (specifier == 's')
		return (print_str(va_arg(*ap, char *)));
	else if (specifier == 'p')
		return (print_ptr(va_arg(*ap, unsigned long long)));
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
