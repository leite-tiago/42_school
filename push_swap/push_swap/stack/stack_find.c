/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_find.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:59:51 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/29 20:25:34 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * This funciton will return the cheapest node on the stack.
 */
t_node	*find_cheapest(t_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

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
 * This function will return the biggest node on the stack.
 */
t_node	*find_biggest(t_node *stack)
{
	t_node	*biggest;
	long	current_biggest;

	if (!stack)
		return (NULL);
	current_biggest = LONG_MIN;
	while (stack)
	{
		if (stack->nb > current_biggest)
		{
			current_biggest = stack->nb;
			biggest = stack;
		}
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
	long	current_smallest;

	if (!stack)
		return (NULL);
	current_smallest = LONG_MAX;
	while (stack)
	{
		if (stack->nb < current_smallest)
		{
			current_smallest = stack->nb;
			smallest = stack;
		}
		stack = stack->next;
	}
	return (smallest);
}
