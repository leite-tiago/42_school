/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:36:12 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/27 00:42:47 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * Sort a stack with only 3 elements.
 */
void	sort_3(t_node **stack)
{
	t_node	*biggest;

	biggest = find_biggest(*stack);
	if (biggest == *stack)
		ra(stack);
	else if ((*stack)->next == biggest)
		rra(stack);
	if ((*stack)->nb > (*stack)->next->nb)
		sa(stack);
}

/**
 * Sort a stack with more than 3 elements.
 */
void	sort_rest(t_node **a, t_node **b)
{
	int	a_len;

	a_len = stack_len(*a);
	if (a_len-- > 3 && !is_sorted(*a))
		pb(a, b);
	if (a_len-- > 3 && !is_sorted(*a))
		pb(a, b);
	while (a_len-- > 3 && !is_sorted(*a))
	{
		init_n_a(*a, *b);
		move_ab(a, b);
	}
	sort_3(a);
	while (*b)
	{
		init_n_b(*a, *b);
		move_ba(a, b);
	}
	set_index(*a);
	small_top(a);
}

void	initialize_a(t_node *a, t_node *b)
{
	set_index(a);
	set_index(b);
	set_target_a(a, b);
	set_cost_a(a, b);
	set_cheapest(a);
}

void	initialize_b(t_node *a, t_node *b)
{
	set_index(a);
	set_index(b);
	target_b(a, b);
}
