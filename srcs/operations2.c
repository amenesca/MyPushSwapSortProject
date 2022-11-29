/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:50:43 by amenesca          #+#    #+#             */
/*   Updated: 2022/11/29 18:51:05 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	push_b(t_stack **stack_a, t_stack **stack_b)
{
	push_stack(stack_a, stack_b);
	ft_printf("pb\n");
	return (0);
}

int	rotate_a(t_stack **stack_a)
{
	rotate_stack(stack_a);
	ft_printf("ra\n");
	return (0);
}

int	rotate_b(t_stack **stack_b)
{
	rotate_stack(stack_b);
	ft_printf("rb\n");
	return (0);
}

int	rotate_r(t_stack **stack_a, t_stack **stack_b)
{
	rotate_stack(stack_a);
	rotate_stack(stack_b);
	ft_printf("rr\n");
	return (0);
}
