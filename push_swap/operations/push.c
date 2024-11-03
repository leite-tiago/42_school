/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:09:15 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/31 19:06:11 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * Take the first element at the top of src and put it at the top of dest.
 * Do nothing if src is empty.
 */
void	push(t_node **src, t_node **dest)
{
	t_node	*node;

	if (!(*src))
		return ;
	node = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	node->prev = NULL;
	if (!*dest)
	{
		*dest = node;
		node->next = NULL;
	}
	else
	{
		node->next = *dest;
		*dest = node;
		node->next->prev = node;
	}
}

/**
 * (push a): Take the first element at the top of b and put it at the top of a.
 * Do nothing if b is empty.
 */
void	pa(t_node **a, t_node **b)
{
	push(b, a);
	ft_printf("pa\n");
}

/**
 * (push b): Take the first element at the top of a and put it at the top of b.
 * Do nothing if a is empty.
 */
void	pb(t_node **a, t_node **b)
{
	push(a, b);
	ft_printf("pb\n");
}
