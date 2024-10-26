/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:00:52 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/12 12:01:23 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*create_node(int nb)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	new_node->nb = nb;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

void	push_node(t_node **stack, int nb)
{
	t_node	*new_node;
	t_node	*last;

	new_node = create_node(nb);
	if (!(*stack))
	{
		*stack = new_node;
		new_node->next = new_node;
		new_node->prev = new_node;
	}
	else
	{
		last = (*stack)->prev;
		new_node->next = *stack;
		new_node->prev = last;
		last->next = new_node;
		(*stack)->prev = new_node;
		*stack = new_node;
	}
}

void	print_stack(t_node *stack)
{
	t_node	*start;

	if (!stack)
	{
		printf("Empty Stack\n"); // Mudar para ft_printf se necessário
		return ;
	}
	start = stack;
	while (stack)
	{
		printf("%d ", stack->nb);
		stack = stack->next;
		if (stack == start)
			break ;
	}
	printf("\n");
}

void	free_stack(t_node **stack)
{
	t_node	*current;
	t_node	*next_node;
	t_node	*start;

	if (!(*stack))
		return ;
	current = *stack;
	start = *stack;
	while (current)
	{
		next_node = current->next;
		free(current);
		current = next_node;
		if (current == start)
			break ;
	}
	*stack = NULL;
}
