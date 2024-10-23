/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:09:15 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/12 00:03:30 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_node **src, t_node **dest)
{
	t_node	*node_to_move;

	if (!(*src))
		return ;
	node_to_move = *src;
	pop(src);
	if (*dest)
	{
		node_to_move->next = *dest;
		node_to_move->prev = (*dest)->prev;
		(*dest)->prev->next = node_to_move;
		(*dest)->prev = node_to_move;
	}
	else
	{
		node_to_move->next = node_to_move;
		node_to_move->prev = node_to_move;
	}
	*dest = node_to_move;
}

void	pop(t_node **stack)
{
	t_node	*last;

	if (!(*stack))
		return ;
	if ((*stack)->next == *stack)
		*stack = NULL;
	else
	{
		last = (*stack)->prev;
		*stack = (*stack)->next;
		(*stack)->prev = last;
		last->next = *stack;
	}
}

/**
 * (push a): Take the first element at the top of b and put it at the top of a.
 * Do nothing if b is empty.
 */
void	pa(t_node **b, t_node **a)
{
	push(b, a);
	write(1, "pa\n", 3);
}

/**
 * (push b): Take the first element at the top of a and put it at the top of b.
 * Do nothing if a is empty.
 */
void	pb(t_node **a, t_node **b)
{
	push(a, b);
	write(1, "pb\n", 3);
}
