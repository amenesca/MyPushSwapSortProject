/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macro_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:46:06 by amenesca          #+#    #+#             */
/*   Updated: 2022/11/29 18:47:51 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	swap_stack(t_stack **head)
{
	t_stack	*temp;
	t_stack	*temp2;

	temp = *head;
	temp2 = (*head)->next;
	if (*head == NULL || (*head)->next == NULL)
		return (-1);
	temp->next = temp2->next;
	temp2->next = temp;
	*head = temp2;
	return (0);
}

int	push_stack(t_stack **origin, t_stack **destiny)
{
	t_stack	*aux;
	t_stack	*auy;

	if (*origin == NULL)
		return (-1);
	auy = (*origin)->next;
	aux = *origin;
	aux->next = *destiny;
	*origin = auy;
	*destiny = aux;
	return (0);
}

int	rotate_stack(t_stack **head)
{
	t_stack	*aux_beg;
	t_stack	*aux_final;

	if (*head == NULL || (*head)->next == NULL)
		return (-1);
	aux_beg = *head;
	aux_final = ft_stacklast(*head);
	*head = aux_beg->next;
	aux_final->next = aux_beg;
	aux_beg->next = NULL;
	return (0);
}

int	rev_rotate_stack(t_stack **head)
{
	t_stack	*aux_final;
	t_stack	*aux_beg;
	t_stack	*aux_next;

	if (*head == NULL || (*head)->next == NULL)
		return (-1);
	aux_next = *head;
	while (aux_next->next->next != NULL)
		aux_next = aux_next->next;
	aux_beg = *head;
	aux_final = ft_stacklast(*head);
	*head = aux_final;
	(*head)->next = aux_beg;
	aux_next->next = NULL;
	return (0);
}
