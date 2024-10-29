/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:57:47 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/29 01:17:46 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
 * Verifys if a node is a duplicate.
 */
bool	is_duplicate(t_node *a, int n)
{
	if (!a)
		return (false);
	while (a)
	{
		if (a->nb == n)
			return (true);
		a = a->next;
	}
	return (false);
}
