/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 23:48:56 by tborges-          #+#    #+#             */
/*   Updated: 2024/11/04 14:28:48 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_node	*a;
	t_node	*b;
	char	**args;

	a = NULL;
	b = NULL;
	verify_null(argc, argv[1]);
	args = treat_args(argv + 1);
	initialize_a(&a, args);
	if (!is_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a);
		else if (stack_len(a) == 3)
			sort_3(&a);
		else
			sort_rest(&a, &b);
	}
	free_stack(&a);
	free_args(args);
	return (0);
}
