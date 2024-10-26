/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:11:31 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/26 20:02:37 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

/**
 * This function will return the last node on the stack.
 */
t_node	*find_last(t_node **stack)
{
	t_node	*current;

	current = *stack;
	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
	}
	return (current);
}

/**
 * Calculate the lenght of the stack.
 */
int	stack_len(t_node *stack)
{
	int	len;

	if (!stack)
		return (0);
	len = 0;
	while (stack->next)
	{
		len++;
		stack = stack->next;
	}
	return (len + 1);
}

/**
 * Verify if the stack is sorted or not.
 */
bool	is_sorted(t_node *stack)
{
	if (!stack)
		return (true);
	while (stack->next)
	{
		if (stack->nb > stack->next->nb)
			return (false);
		stack = stack->next;
	}
	return (true);
}

/**
 * This function will return the biggest node on the stack.
 */
t_node	*find_biggest(t_node *stack)
{
	t_node	*biggest;

	if (!stack)
		return (NULL);
	biggest->nb = LONG_MIN;
	while (stack)
	{
		if (stack->nb > biggest->nb)
			biggest = stack;
		stack = stack->next;
	}
	return (biggest);
}

/**
 * This function will return the smallest node on the stack.
 */
t_node	*find_smallest(t_node *stack)
{
	t_node	*smallest;

	if (!stack)
		return (NULL);
	smallest->nb = LONG_MAX;
	while (stack)
	{
		if (stack->nb > smallest->nb)
			smallest = stack;
		stack = stack->next;
	}
	return (smallest);
}
