/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:57:54 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/29 01:15:06 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * Moves the smallest node to the top of the stack.
 */
static void	smallest_to_top(t_node **a)
{
	while ((*a)->nb != find_smallest(*a)->nb)
	{
		if (find_smallest(*a)->up_mid)
			ra(a);
		else
			rra(a);
	}
}

/**
 * Move the cheapest node on a to b.
 */
void	move_cheapest_to_b(t_node **a, t_node **b)
{
	t_node	*cheapest_node;

	cheapest_node = find_cheapest(*a);
	if (cheapest_node->up_mid && cheapest_node->target->up_mid)
		align_cheapest_to_target(a, b, cheapest_node, true);
	else if (!(cheapest_node->up_mid) && !(cheapest_node->target->up_mid))
		align_cheapest_to_target(a, b, cheapest_node, false);
	bring_to_top(a, cheapest_node, 'a');
	bring_to_top(b, cheapest_node->target, 'b');
	pb(a, b);
}

/**
 * Move the node on top of b to a, adjusting a to have the target on top.
 */
void	move_target_to_a(t_node **a, t_node **b)
{
	bring_to_top(a, (*b)->target, 'a');
	pa(a, b);
}

/**
 * This function aligns the cheapest node in stack a with its target
 * node in stack b, using synchronized rotations. The is_up_mid flag determines
 * the direction of rotation,and the indices are updated at the end to ensure
 * that the node positions are correct.
 */
void	align_cheapest_to_target(t_node **a, t_node **b, t_node *cheapest_node,
		bool is_up_mid)
{
	if (is_up_mid)
	{
		while (*b != cheapest_node->target && *a != cheapest_node)
			rr(a, b);
		set_index(*a);
		set_index(*b);
	}
	else
	{
		while (*b != cheapest_node->target && *a != cheapest_node)
			rrr(a, b);
		set_index(*a);
		set_index(*b);
	}
}

/**
 * Puts the node top on top of the stack.
 */
void	bring_to_top(t_node **stack, t_node *top, char which_stack)
{
	if (which_stack == 'a')
	{
		while (*stack != top)
		{
			if (top->up_mid)
				ra(stack);
			else
				rra(stack);
		}
	}
	else if (which_stack == 'b')
	{
		while (*stack != top)
		{
			if (top->up_mid)
				rb(stack);
			else
				rrb(stack);
		}
	}
}
