/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:47:06 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/08 21:45:36 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char *argv[])
{
	int	pid;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		if (kill(pid, 0) == -1)
		{
			ft_printf("Error: Invalid PID.\n");
			return (1);
		}
		send_str(pid, argv[2]);
	}
	else
		ft_printf("\nUsage: ./client <PID> <MESSAGE>\n\n");
}

void	send_str(int pid, char *str)
{
	int	i;

	i = 0;
	while (str[i])
		send_byte(pid, str[i++]);
	send_byte(pid, '\0');
}

void	send_byte(int pid, char c)
{
	int	shift;

	shift = 0;
	while (shift < 7)
	{
		if ((c >> shift) & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		shift++;
		usleep(300);
	}
}
