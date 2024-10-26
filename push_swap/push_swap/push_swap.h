/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:14:57 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/27 00:45:25 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdbool.h>

typedef struct node
{
	int			nb;
	int			index;
	int			cost;
	bool		up_mid;
	bool		cheapest;
	struct node	*prev;
	struct node	*next;
	struct node	*target;
}				t_node;

// operations
void			swap(t_node **stack);
void			sa(t_node **a);
void			sb(t_node **b);
void			ss(t_node **a, t_node **b);

void			push(t_node **src, t_node **dest);
void			pa(t_node **a, t_node **b);
void			pb(t_node **a, t_node **b);

void			rotate(t_node **stack);
void			ra(t_node **a);
void			rb(t_node **b);
void			rr(t_node **a, t_node **b);

void			reverse_rotate(t_node **stack);
void			rra(t_node **a);
void			rrb(t_node **b);
void			rrr(t_node **a, t_node **b);

// stack
t_node			*find_last(t_node **stack);
int				stack_len(t_node *stack);
bool			is_sorted(t_node *stack);
t_node			*find_biggest(t_node *stack);
t_node			*find_smallest(t_node *stack);

// sorting
void			sort_3(t_node **stack);
void			sort_rest(t_node **a, t_node **b);
void			initialize_a(t_node *a, t_node *b);
void			initialize_b(t_node *a, t_node *b);

// stack
void			set_index(t_node *stack);
void			set_target_a(t_node *a, t_node *b);
void			set_target_b(t_node *a, t_node *b);
void			set_cost_a(t_node *a, t_node *b);
void			set_cheapest(t_node *stack);

t_node			*find_last(t_node **stack);
int				stack_len(t_node *stack);
bool			is_sorted(t_node *stack);
t_node			*find_biggest(t_node *stack);
t_node			*find_smallest(t_node *stack);

#endif
