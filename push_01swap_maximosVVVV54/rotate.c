/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:47:19 by mocharfa          #+#    #+#             */
/*   Updated: 2022/06/30 16:48:34 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//rotet
int	glabcha9lab(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	// if (countlist(*stack) != 2)
	// {
	// 	return (-1);
	// }
	head = *stack;
	tail = ft_addlast(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int	ra(t_list **stack_a)
{
	if (glabcha9lab(stack_a) == -1)
		return (-1);
	ft_printf("ra\n");
	return (0);
}

int	rb(t_list **stack_b)
{
	if (glabcha9lab(stack_b) == -1)
		return (-1);
	ft_printf("rb\n");
	return (0);
}

int	rr(t_list **stack_a, t_list **stack_b)
{
	if (countlist(*stack_a) < 2 || countlist(*stack_b) < 2)
		return (-1);
	glabcha9lab(stack_a);
	glabcha9lab(stack_b);
	ft_printf("rr\n");
	return (0);
}
