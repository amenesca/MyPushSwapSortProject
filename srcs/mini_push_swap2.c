/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_push_swap2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:43:29 by amenesca          #+#    #+#             */
/*   Updated: 2022/11/29 19:44:01 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap_4_2(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*aux;

	aux = (*stack_a)->next;
	if (aux->next->index == 3)
	{
		rotate_a(stack_a);
		rotate_a(stack_a);
		push_b(stack_a, stack_b);
		push_swap_3(stack_a);
		push_a(stack_a, stack_b);
		rotate_a(stack_a);
		return ;
	}
	else
	{
		rev_rotate_a(stack_a);
		push_b(stack_a, stack_b);
		push_swap_3(stack_a);
		push_a(stack_a, stack_b);
		rotate_a(stack_a);
	}
}

void	push_swap_5_2(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*aux;

	aux = (*stack_a)->next->next;
	if (aux->index == 4)
	{
		rotate_a(stack_a);
		rotate_a(stack_a);
		push_b(stack_a, stack_b);
		push_swap_4(stack_a, stack_b);
		push_a(stack_a, stack_b);
		rotate_a(stack_a);
		return ;
	}
	if (aux->next->index == 4)
	{
		rev_rotate_a(stack_a);
		rev_rotate_a(stack_a);
		push_b(stack_a, stack_b);
		push_swap_4(stack_a, stack_b);
		push_a(stack_a, stack_b);
		rotate_a(stack_a);
	}
	else
		push_swap_5_3(stack_a, stack_b);
}

void	push_swap_5_3(t_stack **stack_a, t_stack **stack_b)
{
	rev_rotate_a(stack_a);
	push_b(stack_a, stack_b);
	push_swap_4(stack_a, stack_b);
	push_a(stack_a, stack_b);
	rotate_a(stack_a);
	return ;
}
