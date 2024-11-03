/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:57:43 by tborges-          #+#    #+#             */
/*   Updated: 2024/11/03 19:09:02 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * This function is going to iterate the stack and initialize the index's
 * (set the index of each node to the corresponding index) as well as the
 * atribute up_mid wich tells if the node is above the mid or not.
 */
void	set_index(t_node *stack)
{
	int	mid;
	int	i;

	i = 0;
	if (!stack)
		return ;
	mid = stack_len(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= mid)
			stack->up_mid = true;
		else
			stack->up_mid = false;
		stack = stack->next;
		++i;
	}
}

/**
 * Sets the target for each node of stack a:
 * This function iterates through stack a and for each node searchs
 * on the stack b for its target node. The target node is the biggest
 * that's less than the node itself.
 */
void	set_target_a(t_node *a, t_node *b)
{
	t_node	*current;
	t_node	*target;
	long	current_best_value;

	target = NULL;
	while (a)
	{
		current_best_value = LONG_MIN;
		current = b;
		while (current)
		{
			if ((current->nb < a->nb) && (current->nb > current_best_value))
			{
				current_best_value = current->nb;
				target = current;
			}
			current = current->next;
		}
		if (current_best_value == LONG_MIN)
			a->target = find_smallest(b);
		else
			a->target = target;
		a = a->next;
	}
}

/**
 * Sets the target for each node of stack b:
 * This function iterates through stack b and for each node searchs
 * on the stack a for its target node. The target node is the biggest
 * that's less than the node itself.
 */
void	set_target_b(t_node *a, t_node *b)
{
	t_node	*current;
	t_node	*target;
	long	current_best_value;

	while (b)
	{
		current_best_value = LONG_MAX;
		current = a;
		while (current)
		{
			if ((current->nb > b->nb) && (current->nb < current_best_value))
			{
				current_best_value = current->nb;
				target = current;
			}
			current = current->next;
		}
		if (current_best_value == LONG_MAX)
			b->target = find_smallest(a);
		else
			b->target = target;
		b = b->next;
	}
}

/**
 * Sets the cost for each node of stack a:
 * The cost is calculate by the index plus the index of the target.
 * (If it's not above the mid we subtract the len of the stack)
 */
void	set_cost_a(t_node *a, t_node *b)
{
	int	i;
	int	j;

	i = stack_len(a);
	j = stack_len(b);
	while (a)
	{
		a->cost = a->index;
		if (!(a->up_mid))
			a->cost = i - (a->index);
		if (a->target->up_mid)
			a->cost += (a->target->index);
		else
			a->cost += j - (a->target->index);
		a = a->next;
	}
}

/**
 * Search for the node with the smallest cost and sets it as the cheapest.
 */
void	set_cheapest(t_node *stack)
{
	long	current_cheapest;
	t_node	*cheapest_node;

	if (!stack)
		return ;
	current_cheapest = LONG_MAX;
	while (stack)
	{
		if (stack->cost < current_cheapest)
		{
			current_cheapest = stack->cost;
			cheapest_node = stack;
		}
		stack = stack->next;
	}
	cheapest_node->cheapest = true;
}
