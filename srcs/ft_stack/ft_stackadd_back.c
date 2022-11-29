/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:46:55 by amenesca          #+#    #+#             */
/*   Updated: 2022/06/01 12:46:56 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_stackadd_back(t_stack **head, t_stack *new)
{
	t_stack	*list;

	if (!new)
		return ;
	if (!*head)
	{
		*head = new;
		return ;
	}
	list = ft_stacklast(*head);
	list->next = new;
}
