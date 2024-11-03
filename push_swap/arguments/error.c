/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:57:36 by tborges-          #+#    #+#             */
/*   Updated: 2024/11/03 19:10:45 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * Verifys if the input is a valid number.
 */
bool	is_valid_input(char *str)
{
	int	i;

	i = 0;
	if ((str[0] == '-' && str[1] == '0') || (str[0] == '+' && str[1] == '0'))
		return (false);
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

char	**treat_args(char *argv[])
{
	int		i;
	char	*temp;
	char	*temp2;
	char	**res;

	i = 0;
	temp = calloc(2, 1);
	while (argv[i])
	{
		temp2 = ft_strjoin(temp, argv[i]);
		free(temp);
		temp = ft_strjoin(temp2, " ");
		free(temp2);
		i++;
	}
	res = ft_split(temp, ' ');
	free(temp);
	return (res);
}
