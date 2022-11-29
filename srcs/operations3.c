/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:51:38 by amenesca          #+#    #+#             */
/*   Updated: 2022/11/29 19:10:27 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	rev_rotate_a(t_stack **stack_a)
{
	rev_rotate_stack(stack_a);
	ft_printf("rra\n");
	return (0);
}

int	rev_rotate_b(t_stack **stack_b)
{
	rev_rotate_stack(stack_b);
	ft_printf("rrb\n");
	return (0);
}

int	rev_rotate_r(t_stack **stack_a, t_stack **stack_b)
{
	rev_rotate_stack(stack_a);
	rev_rotate_stack(stack_b);
	ft_printf("rrr\n");
	return (0);
}
