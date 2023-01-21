/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrtate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 02:38:05 by mocharfa          #+#    #+#             */
/*   Updated: 2022/06/18 20:04:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	revrotate(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (countlist(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_addlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}

int	rra(t_list **stack_a)
{
	if (revrotate(stack_a) == -1)
		return (-1);
	ft_printf("rra\n");
	return (0);
}

int	rrb(t_list **stack_b)
{
	if (revrotate(stack_b) == -1)
		return (-1);
	ft_printf("rrb\n");
	return (0);
}

int	rrr(t_list **stack_a, t_list **stack_b)
{
	if ((countlist(*stack_a) < 2) || (countlist(*stack_b) < 2))
		return (-1);
	revrotate(stack_a);
	revrotate(stack_b);
	ft_printf("rrr\n");
	return (0);
}
