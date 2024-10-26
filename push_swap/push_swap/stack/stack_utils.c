/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:11:31 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/26 15:53:41 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_node	*find_last(t_node **stack)
{
	t_node	*current;

	current = *stack;
	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
	}
	return (current);
}

int	stack_len(t_node *stack)
{
	int	len;

	if (!stack)
		return (0);
	len = 0;
	while (stack->next)
	{
		len++;
		stack = stack->next;
	}
	return (len + 1);
}

bool	is_sorted(t_node *stack)
{
	if (!stack)
		return (true);
	while (stack->next)
	{
		if (stack->nb > stack->next->nb)
			return (false);
		stack = stack->next;
	}
	return (true);
}
