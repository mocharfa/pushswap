/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:45:59 by mocharfa          #+#    #+#             */
/*   Updated: 2022/07/06 20:45:59 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_list **stack)
{
	int	first;
	int	second;
	int	third;

	first = (*stack)->index;
	second = (*stack)->next->index;
	third = (*stack)->next->next->index;
	if (first > second && first < third && second < third)
		sa(stack);
	else if (first > second && second > third && first > third)
	{
		sa(stack);
		rra(stack);
	}
	else if (first > second && first > third && second < third)
		ra(stack);
	else if (first < second && second > third && third > first)
	{
		sa(stack);
		ra(stack);
	}
	else if (first < second && second > third && third < first)
		rra(stack);
}
