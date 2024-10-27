/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:14:08 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/27 11:14:32 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * Sets all the fields on each node of a.
 */
void	initialize_a(t_node *a, t_node *b)
{
	set_index(a);
	set_index(b);
	set_target_a(a, b);
	set_cost_a(a, b);
	set_cheapest(a);
}


/**
 * Sets all the fields on each node of b
 */
void	initialize_b(t_node *a, t_node *b)
{
	set_index(a);
	set_index(b);
	target_b(a, b);
}
