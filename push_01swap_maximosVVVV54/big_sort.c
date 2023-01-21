/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 07:20:08 by marvin            #+#    #+#             */
/*   Updated: 2022/06/29 07:20:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int get_max(t_list *stack)
{
    t_list *tmp;
    int max;

    tmp = stack;
    max = tmp->index;
    while (tmp)
    {
        if (max < tmp->index)
            max = tmp->index;
        tmp = tmp->next;
    }
    //printf("<<%d>>\n", max);
    return(max);
}
// int check_palace(t_list **stack_a,int x)
// {
//     t_list *tmp;
//     int i;

//     i = 0;
//     tmp =(*stack_a);
//     while(tmp != NULL)
//     {
//         if(tmp->index == x)
//             return(1);
//         //i++;
//         tmp = tmp->next;
//     }
//     return(0);
// }

void ft_a(t_list **stack_b, int n, int l)
{
    int size;
    size = countlist(*stack_b);
    if(l > size / 2)
    {
        while (l > size/2)
        {
            if(n == (*stack_b)->index)
                break;
            rrb(stack_b);
            l--;
        }
    }
    else if(l<= size/2)
    {
        while(l<= size/2)
        {
            if(n == (*stack_b)->index)
                break;
            rb(stack_b);
            l++;
        }
    }
}

int	position2(int a, t_list *stack)
{
	t_list	*tmp = stack;
	int		i;

	i = 0;
	while (tmp)
	{
		if (tmp->index == a)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (0);
}
int last_elemen(t_list **stack)
{
	t_list	*tmp = *stack;

	while (tmp)
	{
		if (tmp->next == NULL)
			return(tmp->data);
		tmp = tmp->next;
	}
	return(-1);
}
int is_inStack(int dataToFind, t_list **stack)
{
	t_list	*tmp = *stack;

	while (tmp)
	{
		if (tmp->data == dataToFind)
			return(1);
		tmp = tmp->next;
	}
	return(0);
}
void put_element_first(t_list **stack,int data)
{
    int pos;

    pos = get_index(stack, data);
    int size =countlist(*stack);
    if (pos > (size-1)/2) {
        while ((*stack)->data != data)
            rra(stack);
    }
    else {
        while ((*stack)->data != data)
            ra(stack);
    }
}

void get_index2(t_list **stack,t_tool *t) {
    t_list *tmp = *stack;

    t->tmpElemIdx = 0;
    t->tmpElemVal = -2;
    while (tmp) {
        if (tmp->data <= t->max) {
            t->tmpElemVal = tmp->data;
            break ;
        }
        t->tmpElemIdx++;
        tmp = tmp->next;
    }

    return ;
}

int position(t_list **stack, t_tool *t)
{
    t_list *tmp;
    int i = 0;
    tmp = *stack;
    while(tmp)
    {
        if(tmp->index >= t->min && tmp->index <= t->max)
            return i;
        i++;
        tmp = tmp->next;
    }
    return 0;
}

int find_min(t_list **stack){
    int x = (*stack)->index;
    t_list *tmp = (*stack);
    while(tmp)
    {
        if (tmp->index < x)
            x = tmp->index;
        tmp = tmp->next;
    }
    return x;
}

void push_element(t_list **stack_a,t_list **stack_b,t_tool *t)
{
    
    int size = countlist(*stack_a);
    int x = position(stack_a, t);
    // printf("%d\n", x);
    if (x <= size / 2)
    {
        while(x >= 0)
        {
            if ((*stack_a)->index >= t->min && (*stack_a)->index <= t->max)
            {
                pb(stack_a, stack_b);
                if ((*stack_b)->index < t->med)
                    rb(stack_b);
                t->push--;
                break;
            }
            else
                ra(stack_a);
            x--;
        }
    }
    else if (x > size / 2)
    {
        while(x < size)
        {
            if ((*stack_a)->index >= t->min && (*stack_a)->index <= t->max)
            {
                pb(stack_a, stack_b);
                if ((*stack_b)->index < t->med)
                    rb(stack_b);
                t->push--;
                break;
            }
            else
                rra(stack_a);
            x++;
        }
    }
}

int get_index(t_list **stack,int data) {
    t_list *tmp = *stack;

    int pos = 0;
    while (tmp) {
        if (tmp->data == data) {
            break ;
        }
        pos++;
        tmp = tmp->next;
    }
    return pos;
}
int get_min(t_list **stack, int data)
{
    t_list *head;

    head = *stack;
    int i = 0;
    //printf("~~~%d\n", data);
    while(head)
    {
        if (head->index == data)
            return (i);
        head = head->next;
        i++;
    }
    return (-1);
}

void set_last_elem(t_list **stack_a,int value)
{
    t_list *tmp;
    tmp= *stack_a;
    while (tmp)
    {
        if(tmp->next== NULL)
        {
            tmp->data=value;
        }
        tmp=tmp->next;
    }
}

void    push_to_a(t_list **stack_a, t_list **stack_b)
{
    int size = countlist(*stack_b);
    int i = 0;
    while (size != 1)
    {

        int x = get_min(stack_b, (*stack_a)->index - 1);
        int size = countlist(*stack_b);
        if (size == 1)
        {
            return;
        }
        if (x <= size / 2)
        {
            while(x > 0)
            {
                if ((*stack_a)->index - 1 == (*stack_b)->index){
                    pa(stack_a, stack_b);
                }
                else
                    rb(stack_b);
                x--;
            }
        }
        else if (x > size / 2)
        {
            while (x < size)
            {
                if ((*stack_a)->index - 1 == (*stack_b)->index){
                    pa(stack_a, stack_b);
                }
                else
                    rrb(stack_b);
                x++;
            }
        }
        if (!(*stack_b))
            return ;
        if ((*stack_a)->index - 1 == (*stack_b)->index){
            pa(stack_a, stack_b);
            i++;
        }
    }

}

void sort_100(t_list **stack_a, t_list **stack_b)
{
    t_tool t;
    int size;
    size = countlist(*stack_a);
    while (size != 5)
    {
        if(size >= 100)
			t.push =((size - 5) / 5) + 1;
        else
            t.push =((size - 5) / 3) + 1;
        t.min = find_min(stack_a);
        t.max = (t.min + t.push) - 1;
        t.med =(t.min + t.max) / 2;
        size = countlist(*stack_a);
        while(t.push != 0)
        {
            if (size != 5)
                push_element(stack_a, stack_b, &t);
            else
                break ;
            size = countlist(*stack_a);
        }
    }
     t_list *tmp = *stack_a;
    while(tmp)
    {
        printf("%d\n", tmp->index);
        tmp = tmp->next;
    }
    // tmp = *stack_b;
    // while(tmp)
    // {
    //     printf("---%d\n", tmp->index);
    //     tmp = tmp->next;
    // }
    exit(1);
    sort5(stack_a, stack_b);
    // push_to_a(stack_a, stack_b);
    // set_last_elem(stack_a,-1);
}
