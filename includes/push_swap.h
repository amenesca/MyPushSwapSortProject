/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:45:54 by amenesca          #+#    #+#             */
/*   Updated: 2022/11/29 19:46:52 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}					t_stack;

void		ft_stackadd_back(t_stack **lst, t_stack *new);
void		ft_stackadd_front(t_stack **lst, t_stack *new);
t_stack		*ft_stacklast(t_stack *lst);
t_stack		*ft_stacknew(int content);
void		test_args(char **str, int *digit, int *signal);
void		test_duplicate(t_stack **head, int *duplicate);
long int	push_atoi(const char *str, int *limit);
int			swap_stack(t_stack **head);
int			push_stack(t_stack **origin, t_stack **destiny);
int			rotate_stack(t_stack **head);
int			rev_rotate_stack(t_stack **head);
void		push_error(int argc, char **argv, t_stack **head, int *limit);
int			swap_a(t_stack **stack_a);
int			swap_b(t_stack **stack_b);
int			swap_s(t_stack **stack_a, t_stack **stack_b);
int			push_a(t_stack **stack_a, t_stack **stack_b);
int			push_b(t_stack **stack_a, t_stack **stack_b);
int			rotate_a(t_stack **stack_a);
int			rotate_b(t_stack **stack_b);
int			rotate_r(t_stack **stack_a, t_stack **stack_b);
int			rev_rotate_a(t_stack **stack_a);
int			rev_rotate_b(t_stack **stack_b);
int			rev_rotate_r(t_stack **stack_a, t_stack **stack_b);
int			is_ascending_order(t_stack **head);
void		free_stack(t_stack **stack);
void		prepare_for_sort(int argc, t_stack **head);
int			ft_atoi_new(const char *str);
int			int_arr_len(int *int_arr);
int			find_most_sig(int nbr);
void		push_swap(t_stack **stack_a, t_stack **stack_b, int n);
void		mini_push_swap(t_stack **stack_a, t_stack **stack_b, int n);
void		push_swap_4_2(t_stack **stack_a, t_stack **stack_b);
void		push_swap_5_2(t_stack **stack_a, t_stack **stack_b);
void		push_swap_5_3(t_stack **stack_a, t_stack **stack_b);
void		push_swap_3(t_stack **stack_a);
void		push_swap_4(t_stack **stack_a, t_stack **stack_b);
void		push_swap_5(t_stack **stack_a, t_stack **stack_b);

#endif
