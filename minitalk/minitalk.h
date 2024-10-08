/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:38:29 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/08 21:44:04 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf/ft_printf.h"
#include "libft/libft.h"
#include <signal.h>
#include <unistd.h>

/**
 * client
 */
void	send_str(int pid, char *str);
void	send_byte(int pid, char c);

/**
 * server
 */

/**
 * Define struct with two fields:
 * c -> current char
 * i -> index of bit from current char
 */
typedef struct s_msg
{
	char	c;
	int		i;
}	t_msg;

t_msg	g_msg = {0, 0};

void	bit_handler(int bit);
