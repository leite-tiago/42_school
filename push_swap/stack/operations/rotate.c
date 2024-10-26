/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:11:14 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/12 12:08:26 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rotate(t_node **stack)
{
	if (!(*stack) || (*stack)->next == *stack)
		return ;
	t_node *first = *stack;
	t_node *last = first->prev;
	*stack = first->next;
	first->prev = last;
	first->next = *stack;
	last->next = first;
	(*stack)->prev = first;
}

/**
 * (rotate a): Shift up all elements of stack a by 1.
 * The first element becomes the last one.
 */
void	ra(t_node **a, bool print)
{
	rotate(a);
	if (print)
		write(1, "ra\n", 3);
}

/**
 * (rotate b): Shift up all elements of stack b by 1.
 * The first element becomes the last one.
 */
void	rb(t_node **b, bool print)
{
	rotate(b);
	if (print)
		write(1, "rb\n", 3);
}

/**
 * ra and rb at the same time.
 */
void	rr(t_node **a, t_node **b)
{
	ra(a, false);
	rb(b, false);
	write(1, "rr\n", 3);
}
