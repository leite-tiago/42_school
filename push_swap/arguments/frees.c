/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frees.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:57:57 by tborges-          #+#    #+#             */
/*   Updated: 2024/11/04 13:08:36 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * Frees everything and exits the program
 * telling the user that an error occurred.
 */
void	free_all(t_node **stack)
{
	free_stack(stack);
	write(2, "Error\n", 6);
	exit(1);
}

/**
 * Frees the space sued by the arguments.
 */
void	free_args(char *args[])
{
	int	i;

	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}

/**
 * Frees the memory used by the stack.
 */
void	free_stack(t_node **stack)
{
	t_node	*temp;
	t_node	*current;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*stack = NULL;
}
