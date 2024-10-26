/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:01:59 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/12 12:08:29 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	reverse_rotate(t_node **stack)
{
	t_node	*last;

	if (!(*stack) || (*stack)->next == *stack)
		return ;
	last = (*stack)->prev;
	*stack = last;
}

/**
 * (reverse rotate a): Shift down all elements of stack a by 1.
 * The last element becomes the first one.
 */
void	rra(t_node **a, bool print)
{
	reverse_rotate(a);
	if (print)
		write(1, "rra\n", 4);
}

/**
 * (reverse rotate b): Shift down all elements of stack b by 1.
 * The last element becomes the first one.
 */
void	rrb(t_node **b, bool print)
{
	reverse_rotate(b);
	if (print)
		write(1, "rrb\n", 4);
}

/**
 * rra and rrb at the same time.
 */
void	rrr(t_node **a, t_node **b)
{
	rra(a, false);
	rrb(b, false);
	write(1, "rrr\n", 4);
}
