/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:01:59 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/29 01:35:55 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * Shift down all elements of stack given by 1.
 * The last element becomes the first one.
 */
void	reverse_rotate(t_node **stack)
{
	t_node	*last;

	if (!*stack || !(*stack)->next)
		return ;
	last = find_last(stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}

/**
 * (reverse rotate a): Shift down all elements of stack a by 1.
 * The last element becomes the first one.
 */
void	rra(t_node **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

/**
 * (reverse rotate b): Shift down all elements of stack b by 1.
 * The last element becomes the first one.
 */
void	rrb(t_node **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

/**
 * rra and rrb at the same time.
 */
void	rrr(t_node **a, t_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
