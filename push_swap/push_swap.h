/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:14:57 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/11 23:56:37 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include "libft/libft.h"
# include <stdbool.h>
#include <stdio.h>

typedef struct node
{
	int			nb;
	int			index;
	struct node	*next;
	struct node	*prev;
	int			value;
	int			sa;
	int			sb;
	int			ra;
	int			rb;
	int			rra;
	int			rrb;
	int			move;
}				t_node;

// operations
void			swap(t_node **stack);
void			sa(t_node **a, bool print);
void			sb(t_node **b, bool print);
void			ss(t_node **a, t_node **b);

void			push(t_node **src, t_node **dest);
void			pop(t_node **stack);
void			pa(t_node **b, t_node **a);
void			pb(t_node **a, t_node **b);

void			rotate(t_node **stack);
void			ra(t_node **a, bool print);
void			rb(t_node **b, bool print);
void			rr(t_node **a, t_node **b);

void			reverse_rotate(t_node **stack);
void			rra(t_node **a, bool print);
void			rrb(t_node **b, bool print);
void			rrr(t_node **a, t_node **b);
//

#endif
