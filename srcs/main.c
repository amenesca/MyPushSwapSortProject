/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:48:54 by amenesca          #+#    #+#             */
/*   Updated: 2022/11/30 15:17:45 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		x;
	int		limit;

	x = 0;
	limit = 0;
	stack_a = NULL;
	stack_b = NULL;
	while (++x < argc && argc != 1)
		ft_stackadd_back(&stack_a, ft_stacknew(push_atoi(argv[x], &limit)));
	push_error(argc, argv, &stack_a, &limit);
	prepare_for_sort(argc, &stack_a);
	if ((argc - 1) > 5)
	{
		push_swap(&stack_a, &stack_b, (argc - 1));
		free_stack(&stack_a);
	}
	if ((argc - 1) <= 5)
	{
		mini_push_swap(&stack_a, &stack_b, (argc - 1));
		free_stack(&stack_a);
	}
	return (0);
}
