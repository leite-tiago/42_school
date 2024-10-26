/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 23:48:56 by tborges-          #+#    #+#             */
/*   Updated: 2024/10/12 12:08:15 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

// Testes para rotate, reverse_rotate, pa e swap
int	main(void)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	// Adicionando nós a stack_a
	push_node(&stack_a, 3);
	push_node(&stack_a, 2);
	push_node(&stack_a, 1); // Stack_a: 1 2 3 (circular)
	// Testando rotate
	printf("Antes do rotate:\n");
	print_stack(stack_a);
	ra(&stack_a, true);
	printf("Depois do rotate:\n");
	print_stack(stack_a); // Esperado: 2 3 1
	// Testando reverse rotate
	printf("\nAntes do reverse rotate:\n");
	print_stack(stack_a);
	ra(&stack_a, true);
	printf("Depois do reverse rotate:\n");
	print_stack(stack_a); // Esperado: 1 2 3
	// Testando swap
	printf("\nAntes do swap:\n");
	print_stack(stack_a);
	sa(&stack_a, true);
	printf("Depois do swap:\n");
	print_stack(stack_a); // Esperado: 2 1 3
	// Testando pa (push de stack_b para stack_a)
	push_node(&stack_b, 42); // Stack_b: 42
	printf("\nAntes do pa (push de stack_b para stack_a):\n");
	printf("Stack_a: ");
	print_stack(stack_a);
	printf("Stack_b: ");
	print_stack(stack_b);
	pa(&stack_a, &stack_b);
	printf("Depois do pa:\n");
	printf("Stack_a: ");
	print_stack(stack_a); // Esperado: 42 2 1 3
	printf("Stack_b: ");
	print_stack(stack_b); // Esperado: vazio (NULL)
	// Liberar memória
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
