/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:45:52 by mocharfa          #+#    #+#             */
/*   Updated: 2022/07/06 20:45:52 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_fistmin(t_list **stack_a, t_list **stack_b)
{
	pb(stack_a, stack_b);
	sort3(stack_a);
	pa(stack_a, stack_b);
}

void	get_secondmin(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a);
	pb(stack_a, stack_b);
	sort3(stack_a);
	pa(stack_a, stack_b);
}

void	get_thirdmin(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	sort4(stack_a, stack_b);
}

void	get_lastmin(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	pb(stack_a, stack_b);
	sort3(stack_a);
	pa(stack_a, stack_b);
}

void	sort4(t_list **stack_a, t_list **stack_b)
{
	int	x;
	int	k;

	k = check_small_value(stack_a);
	x = check_place(stack_a, k);
	if (x == 0)
		get_fistmin(stack_a, stack_b);
	if (x == 1)
		get_secondmin(stack_a, stack_b);
	if (x == 2)
		get_thirdmin(stack_a, stack_b);
	if (x == 3)
		get_lastmin(stack_a, stack_b);
}
