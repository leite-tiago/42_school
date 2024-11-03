/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:57:50 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/29 01:35:06 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
		set_all_a(*a, *b);
		move_cheapest_to_b(a, b);
	}
	sort_3(a);
	while (*b)
	{
		set_all_b(*a, *b);
		move_target_to_a(a, b);
	}
	set_index(*a);
	smallest_to_top(a);
}
