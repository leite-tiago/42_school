/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:08:50 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/31 19:16:15 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * Swap the first 2 elements at the top of stack given.
 * Do nothing if there is only one or no elements.
 */
void	swap(t_node **stack)
{
	*stack = (*stack)->next;
	(*stack)->prev->prev = (*stack);
	(*stack)->prev->next = (*stack)->next;
	if ((*stack)->next)
		(*stack)->next->prev = (*stack)->prev;
	(*stack)->next = (*stack)->prev;
	(*stack)->prev = NULL;
}

/**
 * (swap a): Swap the first 2 elements at the top of stack a.
 * Do nothing if there is only one or no elements.
 */
void	sa(t_node **a)
{
	swap(a);
	ft_printf("sa\n");
}

/**
 * (swap b): Swap the first 2 elements at the top of stack b.
 * Do nothing if there is only one or no elements.
 */
void	sb(t_node **b)
{
	swap(b);
	ft_printf("sb\n");
}

/**
 * sa and sb at the same time.
 */
void	ss(t_node **a, t_node **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
