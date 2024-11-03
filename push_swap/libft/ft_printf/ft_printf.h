/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:12:44 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/08 15:50:19 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

int	ft_printf(const char *format, ...);
int	print_char(int c);
int	print_str(char *str);
int	print_ptr(unsigned long long ptr);
int	print_nbr(int nbr);
int	print_unsigned(unsigned int num);
int	print_hex(unsigned int num, const char specifier);
int	print_percent(void);

#endif
