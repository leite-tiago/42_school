/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:14:57 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/31 20:20:20 by tborges-         ###   ########.fr       */
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

// sort
void			sort_3(t_node **stack);
void			sort_rest(t_node **a, t_node **b);

// sort utils
void			smallest_to_top(t_node **a);
void			move_cheapest_to_b(t_node **a, t_node **b);
void			move_target_to_a(t_node **a, t_node **b);
void			align_cheapest_to_target(t_node **a, t_node **b,
					t_node *cheapest_node, bool is_up_mid);
void			bring_to_top(t_node **stack, t_node *top, char which_stack);

// stack init
void			initialize_a(t_node **a, char *argv[]);
void			new_node(t_node **a, int n);
void			set_all_a(t_node *a, t_node *b);
void			set_all_b(t_node *a, t_node *b);

// stack set
void			set_index(t_node *stack);
void			set_target_a(t_node *a, t_node *b);
void			set_target_b(t_node *a, t_node *b);
void			set_cost_a(t_node *a, t_node *b);
void			set_cheapest(t_node *stack);

// stack utils
int				stack_len(t_node *stack);
bool			is_sorted(t_node *stack);
bool			is_duplicate(t_node *a, int n);

// stack find
t_node			*find_cheapest(t_node *stack);
t_node			*find_last(t_node *stack);
t_node			*find_biggest(t_node *stack);
t_node			*find_smallest(t_node *stack);

// arguments
bool			is_valid_input(char *str);
char			**treat_args(char *argv[]);

// frees
void			free_all(t_node **stack);
void			free_args(char *args[]);
void			free_stack(t_node **stack);

// utils
long			ft_atol(const char *str);
// char			*ft_strcat(char *dest, const char *src);

#endif
