/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:01:59 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/11 11:00:55 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_node **stack)
{

}

/**
 * (reverse rotate a): Shift down all elements of stack a by 1.
 * The last element becomes the first one.
 */
void	rra(t_node **a, bool print)
{
}

/**
 * (reverse rotate b): Shift down all elements of stack b by 1.
 * The last element becomes the first one.
 */
void	rrb(t_node **b, bool print)
{
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
