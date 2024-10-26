/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:08:50 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/12 12:08:23 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap(t_node **stack)
{
	t_node	*node;
	int		tmp;

	node = *stack; // node aponta para primeiro elemento
	tmp = node->nb;	// tmp vai ficar com o numero do primeiro elemento
	node->nb = node->next->nb; // primeiro elemento vai ficar com o numero do segundo
	node->next->nb = tmp; // segundo elemento vai ficar com o numero do primeiro (trocaram numeros)
	tmp = node->index; // tmp vai ficar com index do primeiro elemento
	node->index = node->next->index; // primeiro elemento vai ficar com o index do segundo
	node->next->index = tmp; // segundo elemento vai ficar com o indice do primeiro
}

/**
 * (swap a): Swap the first 2 elements at the top of stack a.
 * Do nothing if there is only one or no elements.
 */
void	sa(t_node **a, bool print)
{
	swap(a);
	if (print)
		write(1, "sa\n", 3);
}

/**
 * (swap b): Swap the first 2 elements at the top of stack b.
 * Do nothing if there is only one or no elements.
 */
void	sb(t_node **b, bool print)
{
	swap(b);
	if (print)
		write(1, "sb\n", 3);
}

/**
 * sa and sb at the same time.
 */
void	ss(t_node **a, t_node **b)
{
	sa(a, false);
	sb(b, false);
	write(1, "ss\n", 3);
}
