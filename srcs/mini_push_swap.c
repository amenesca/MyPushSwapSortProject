/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:39:51 by amenesca          #+#    #+#             */
/*   Updated: 2022/11/29 19:40:39 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap_3(t_stack **stack_a)
{
	if ((*stack_a)->index == 2)
	{
		rotate_a(stack_a);
		if (is_ascending_order(stack_a))
			return ;
		else
			swap_a(stack_a);
		return ;
	}
	if ((*stack_a)->index == 1 && (*stack_a)->next->index == 2)
		rev_rotate_a(stack_a);
	if ((*stack_a)->index == 1 && (*stack_a)->next->index == 0)
		swap_a(stack_a);
	if ((*stack_a)->index == 0 && (*stack_a)->next->index == 2)
	{
		rev_rotate_a(stack_a);
		swap_a(stack_a);
	}
	return ;
}

void	push_swap_4(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->index == 3)
	{
		push_b(stack_a, stack_b);
		push_swap_3(stack_a);
		push_a(stack_a, stack_b);
		rotate_a(stack_a);
		return ;
	}
	if ((*stack_a)->next->index == 3)
	{
		swap_a(stack_a);
		push_b(stack_a, stack_b);
		push_swap_3(stack_a);
		push_a(stack_a, stack_b);
		rotate_a(stack_a);
		return ;
	}
	else
		push_swap_4_2(stack_a, stack_b);
	return ;
}

void	push_swap_5(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->index == 4)
	{
		push_b(stack_a, stack_b);
		push_swap_4(stack_a, stack_b);
		push_a(stack_a, stack_b);
		rotate_a(stack_a);
		return ;
	}
	if ((*stack_a)->next->index == 4)
	{
		rotate_a(stack_a);
		push_b(stack_a, stack_b);
		push_swap_4(stack_a, stack_b);
		push_a(stack_a, stack_b);
		rotate_a(stack_a);
		return ;
	}
	else
		push_swap_5_2(stack_a, stack_b);
	return ;
}

void	mini_push_swap(t_stack **stack_a, t_stack **stack_b, int n)
{
	if (n == 2)
		swap_a(stack_a);
	if (n == 3)
		push_swap_3(stack_a);
	if (n == 4)
		push_swap_4(stack_a, stack_b);
	if (n == 5)
		push_swap_5(stack_a, stack_b);
	return ;
}
