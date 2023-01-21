/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:45:27 by mocharfa          #+#    #+#             */
/*   Updated: 2022/07/06 20:45:27 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_small_value(t_list **stack_a)
{
	t_list	*tmp;
	int		x;

	if (!*stack_a)
		return (0);
	x = (*stack_a)->index;
	tmp = (*stack_a);
	while (tmp != NULL)
	{
		if (tmp->index < x)
			x = tmp->index;
		tmp = tmp->next;
	}
	return (x);
}

int	check_place(t_list **stack_a, int x)
{
	t_list	*tmp1;
	int		i;

	i = 0;
	tmp1 = (*stack_a);
	while (tmp1 != NULL)
	{
		if (tmp1->index == x)
			return (i);
		i++;
		tmp1 = tmp1->next;
	}
	return (0);
}

void	index_stack(t_list **stack)
{
	t_list	*head;
	int		index;

	index = 0;
	head = get_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}

int	is_sorted(t_list **stack)
{
	t_list	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->data > head->next->data)
			return (0);
		head = head->next;
	}
	return (1);
}

void	short_sort(t_list **stack_a, t_list **stack_b)
{
	int	size;

	if (is_sorted(stack_a) || countlist(*stack_a) == 0 \
		|| countlist(*stack_a) == 1)
		return ;
	size = countlist(*stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort3(stack_a);
	else if (size == 4)
		sort4(stack_a, stack_b);
	else if (size == 5)
		sort5(stack_a, stack_b);
}
