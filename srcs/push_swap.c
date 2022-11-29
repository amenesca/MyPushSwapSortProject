/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:15:36 by amenesca          #+#    #+#             */
/*   Updated: 2022/11/29 19:16:44 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap(t_stack **stack_a, t_stack **stack_b, int n)
{
	int	num;
	int	bits;
	int	i;
	int	j;

	i = 0;
	bits = find_most_sig(n - 1);
	while (i < bits)
	{
		j = 0;
		while (j < n)
		{
			num = (*stack_a)->index;
			if (((num >> i) & 1) == 1)
				rotate_a(stack_a);
			else
				push_b(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			push_a(stack_a, stack_b);
		i++;
	}
}
