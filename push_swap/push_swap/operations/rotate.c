/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:11:14 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/26 15:34:04 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * Shift up all elements of stack given by 1.
 * The first element becomes the last one.
 */
void	rotate(t_node **stack)
{
	t_node	*last;

	if (!*stack || !(*stack)->next)
		return ;
	last = find_last(*stack);
	last->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last->next->prev = last;
	last->next->next = NULL;
}

/**
 * (rotate a): Shift up all elements of stack a by 1.
 * The first element becomes the last one.
 */
void	ra(t_node **a)
{
	rotate(a);
	ft_printf("ra\n");
}

/**
 * (rotate b): Shift up all elements of stack b by 1.
 * The first element becomes the last one.
 */
void	rb(t_node **b)
{
	rotate(b);
	ft_printf("rb\n");
}

/**
 * ra and rb at the same time.
 */
void	rr(t_node **a, t_node **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
