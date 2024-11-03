/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:57:39 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/31 21:35:58 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * Sets all the fields on each node of a.
 */
void	initialize_a(t_node **a, char *argv[])
{
	long	n;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (!is_valid_input(argv[i]))
		{
			free_args(argv);
			free_all(a);
		}
		n = ft_atol(argv[i]);
		if (n > INT_MAX || n < INT_MIN)
		{
			free_args(argv);
			free_all(a);
		}
		if (is_duplicate(*a, (int)n))
		{
			free_args(argv);
			free_all(a);
		}
		new_node(a, (int)n);
		i++;
	}
}

/**
 * Creates a new node.
 */
void	new_node(t_node **a, int n)
{
	t_node	*node;
	t_node	*last;

	if (!a)
		return ;
	node = malloc(sizeof(t_node));
	if (!node)
		return ;
	node->next = NULL;
	node->cheapest = false;
	node->nb = n;
	if (!(*a))
	{
		*a = node;
		node->prev = NULL;
	}
	else
	{
		last = find_last(*a);
		last->next = node;
		node->prev = last;
	}
}

/**
 * Sets all the fields on each node of a.
 */
void	set_all_a(t_node *a, t_node *b)
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
void	set_all_b(t_node *a, t_node *b)
{
	set_index(a);
	set_index(b);
	set_target_b(a, b);
}
