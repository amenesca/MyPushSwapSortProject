/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_for_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:11:36 by amenesca          #+#    #+#             */
/*   Updated: 2022/11/29 19:15:10 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	label_stack(int *int_arr, t_stack **head, int n)
{
	int		i;
	t_stack	*temp;

	temp = *head;
	while (temp)
	{
		i = -1;
		while (++i < n)
		{
			if (temp->content == int_arr[i])
			{
				temp->index = i;
				break ;
			}
		}
		temp = temp->next;
	}
}

static void	swap_int(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

static void	sort_int_arr(int *int_arr, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (int_arr[j] > int_arr[j + 1])
				swap_int(&int_arr[j], &int_arr[j + 1]);
			j++;
		}
		i++;
	}
}

void	prepare_for_sort(int argc, t_stack **head)
{
	int		i;
	int		j;
	t_stack	*temp;
	int		*int_arr;

	int_arr = malloc(sizeof(int) * (argc - 1));
	temp = *head;
	i = -1;
	j = 0;
	while (++i < argc - 1)
	{
		int_arr[i] = temp->content;
		temp = temp->next;
	}
	sort_int_arr(int_arr, (argc - 1));
	label_stack(int_arr, head, (argc - 1));
	free(int_arr);
	return ;
}
