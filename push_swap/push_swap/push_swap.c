/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 23:48:56 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/28 17:29:40 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_node	*create_node(int value)
// {
// 	t_node	*new_node;

// 	new_node = malloc(sizeof(t_node));
// 	new_node->nb = value;
// 	new_node->next = NULL;
// 	new_node->prev = NULL;
// 	return (new_node);
// }

// // Função para imprimir uma stack circular
// void	print_stack(t_node *stack)
// {
// 	t_node	*start;

// 	start = stack;
// 	if (!stack)
// 	{
// 		printf("Stack vazia\n");
// 		return ;
// 	}
// 	do
// 	{
// 		printf("%d ", stack->nb);
// 		stack = stack->next;
// 	} while (stack != start);
// 	printf("\n");
// }

// void	free_stack(t_node	*stack)
// {
// 	while(stack->next)
// 	{
// 		stack = stack->next;
// 		free(stack->prev);
// 	}
// }

// int	main(void)
// {
// 	t_node	*stack_a;
// 	t_node	*stack_b;

// 	// Exemplo de uso das funções pa com duas stacks
// 	stack_a = NULL;
// 	stack_b = create_node(3);
// 	stack_b->next = create_node(2);
// 	stack_b->next->prev = stack_b;
// 	stack_b->next->next = create_node(1);
// 	stack_b->next->next->prev = stack_b->next;
// 	stack_b->next->next->next = stack_b;
// 	stack_b->prev = stack_b->next->next;
// 	printf("Stack A antes: ");
// 	print_stack(stack_a);
// 	printf("Stack B antes: ");
// 	print_stack(stack_b);
// 	// Executando a operação pa
// 	pa(&stack_b, &stack_a);
// 	pa(&stack_b, &stack_a);
// 	printf("Stack A depois: ");
// 	print_stack(stack_a);
// 	printf("Stack B depois: ");
// 	print_stack(stack_b);
// 	free_stack(stack_a);
// 	free_stack(stack_b);
// 	return (0);
// }

int	main(int argc, char *argv[])
{
	t_node	*a;
	t_node	*b;
	char	**args;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
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
