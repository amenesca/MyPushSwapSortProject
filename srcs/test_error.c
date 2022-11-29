/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:17:13 by amenesca          #+#    #+#             */
/*   Updated: 2022/11/29 19:19:13 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_error(int argc, char **argv, t_stack **head, int *limit)
{
	int	digit;
	int	signal;
	int	duplicate;

	digit = 0;
	signal = 0;
	duplicate = 0;
	if (argc < 2)
		exit(1);
	test_args(argv, &digit, &signal);
	test_duplicate(head, &duplicate);
	if (digit != 0 || signal != 0 || duplicate != 0 || *limit != 0)
	{
		ft_putendl_fd("Error", 2);
		free_stack(head);
		exit(1);
	}
	if (is_ascending_order(head) == 1)
	{
		free_stack(head);
		exit(1);
	}
}

int	is_ascending_order(t_stack **head)
{
	t_stack	*temp;
	t_stack	*aux;

	temp = *head;
	while (temp)
	{
		aux = temp->next;
		while (aux)
		{
			if (aux->content < temp->content)
				return (0);
			aux = aux->next;
		}
		temp = temp->next;
	}
	return (1);
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (*stack == NULL)
		return ;
	tmp = (*stack)->next;
	free(*stack);
	*stack = NULL;
	free_stack(&tmp);
}
