/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macro_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:15:49 by amenesca          #+#    #+#             */
/*   Updated: 2022/11/29 18:19:25 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	test_digit(int c)
{
	if ((c >= '0' && c <= '9') || c == '-' || c == '+')
		return (1);
	else
		return (0);
}

void	test_args(char **str, int *digit, int *signal)
{
	int	i;
	int	j;

	i = 0;
	while (str[++i])
	{
		j = -1;
		while (str[i][++j])
		{
			if (!test_digit(str[i][j]))
				*digit = -1;
			if (j > 0 && (str[i][j] == '-' || str[i][j] == '+'))
				*signal = -1;
			if (str[i][1] == '\0' && (str[i][0] == '-' || str[i][0] == '+'))
				*signal = -1;
		}
	}
}

void	test_duplicate(t_stack **head, int *duplicate)
{
	t_stack	*aux;
	t_stack	*temp;

	aux = *head;
	while (aux)
	{
		temp = aux->next;
		while (temp)
		{
			if (temp->content == aux->content)
			{
				*duplicate = 1;
				return ;
			}
			temp = temp->next;
		}
		aux = aux->next;
	}
}
