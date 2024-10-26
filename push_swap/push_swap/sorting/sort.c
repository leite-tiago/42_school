/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:36:12 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/26 16:37:39 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_it(t_node **a, t_node **b)
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
	small_sort(a);
	while (*b)
	{
		init_n_b(*a, *b);
		move_ba(a, b);
	}
	ft_index(*a);
	small_top(a);
}
