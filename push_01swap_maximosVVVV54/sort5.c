/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:45:45 by mocharfa          #+#    #+#             */
/*   Updated: 2022/07/06 20:45:45 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get1_firstmin(t_list **stack_a, t_list **stack_b)
{
	pb(stack_a, stack_b);
	sort4(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	get1_secondmin(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a);
	pb(stack_a, stack_b);
	sort4(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	get1_thirdmin(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rra(stack_a);
	rra(stack_a);
	sort5(stack_a, stack_b);
}

void	get1_forthmin(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	pb(stack_a, stack_b);
	sort4(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sort5(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	k;

	k = check_small_value(stack_a);
	i = check_place(stack_a, k);
	if (i == 0)
		get1_firstmin(stack_a, stack_b);
	if (i == 1)
		get1_secondmin(stack_a, stack_b);
	if (i == 2)
		get1_thirdmin(stack_a, stack_b);
	if (i == 3)
	{
		rra(stack_a);
        printf("test");
		sort5(stack_a, stack_b);
        
	}
	if (i == 4)
		get1_forthmin(stack_a, stack_b);
}
