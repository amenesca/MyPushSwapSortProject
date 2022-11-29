/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:50:15 by amenesca          #+#    #+#             */
/*   Updated: 2022/11/29 18:50:21 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	swap_a(t_stack **stack_a)
{
	swap_stack(stack_a);
	ft_printf("sa\n");
	return (0);
}

int	swap_b(t_stack **stack_b)
{
	swap_stack(stack_b);
	ft_printf("sb\n");
	return (0);
}

int	swap_s(t_stack **stack_a, t_stack **stack_b)
{
	swap_stack(stack_a);
	swap_stack(stack_b);
	ft_printf("ss\n");
	return (0);
}

int	push_a(t_stack **stack_a, t_stack **stack_b)
{
	push_stack(stack_b, stack_a);
	ft_printf("pa\n");
	return (0);
}
