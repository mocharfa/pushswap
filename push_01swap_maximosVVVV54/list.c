/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 00:33:39 by mocharfa          #+#    #+#             */
/*   Updated: 2023/01/20 07:10:27 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->data = value;
	new->index = -1;
	new->next = NULL;
	return (new);
}

void	ft_addfront(t_list	**stuck, t_list *new)
{
	new->next = *stuck;
	*stuck = new;
}

int	countlist(t_list *head)
{
	t_list	*tmp;
	int		count;

	tmp = head;
	count = 0;
	while (tmp)
	{
		count++;
        tmp = tmp->next;
	}
	return (count);
}

t_list	*ft_addlast(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (tmp->next)
	{
		tmp = tmp->next;
		if(tmp->next == NULL)
			return(tmp);
	}
	return (tmp);
}

void	ft_addback(t_list **stack, t_list *new)
{
	t_list	*last;

	if (*stack)
	{
		last = ft_addlast(*stack);
		last->next = new;
		new->next = NULL;
	}
	else
	{
		*stack = new;
		(*stack)->next = NULL;
	}
    
}

