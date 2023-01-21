/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 00:55:49 by mocharfa          #+#    #+#             */
/*   Updated: 2023/01/20 02:58:15 by mocharfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stdio.h>
#include <stdlib.h>
#include "ft_printf/ft_printf.h"
#include "Libft/libft.h"
typedef struct s_list
{
    int data;
    int index;
    struct s_list *next;
}   t_list;

typedef struct s_tool
{
    int push;
    int min;
    int max;
    int med;
    int i;
    int tmpElemVal;
    int tmpElemIdx;
}   t_tool;


t_list	*ft_lstnew(int value);
void	ft_addfront(t_list **stuck, t_list *new);
void	ft_addback(t_list **stack, t_list *new);
t_list	*ft_addlast(t_list *head);
int	countlist(t_list *head);
//move
int	swap(t_list **stack);
int	sa(t_list **stack_a);
int	sb(t_list **stack_b);
int	push(t_list **stack_send, t_list **stack_from);
int	pb(t_list **stack_a, t_list **stack_b);
int	pa(t_list **stack_a, t_list **stack_b);
int	glabcha9lab(t_list **stack);
int	ra(t_list **stack_a);
int	rb(t_list **stack_a);
int	revrotate(t_list **stack);
int	rra(t_list **stack_a);
int	rrb(t_list **stack_b);
int	rrr(t_list **stack_a, t_list **stack_b);

//check arg
void ft_checkargs(int argc, char **argv);
int ft_isnum(char *num);
void ft_free(char **str);

int find_first_s(t_list **stack_a, int i, int x);

// Algorithm utils
//void radix_sorting(t_list **stack_a, t_list **stack_b);
void short_sort(t_list **stack_a,t_list **stack_b);
void	index_stack(t_list **stack);
// sort
//void short_sort(t_list **stack_a,t_list **stack_b);
int is_sorted(t_list **stack);
int get_min(t_list **stack, int data);
//new sort
void sort3(t_list **stack);
void sort4(t_list **stack_a, t_list **stack_b);
void sort5(t_list **stack_a, t_list **stack_b);
void sort_100(t_list **stack_a, t_list **stack_b);
int search_small(t_list **stack_a);
//int findpace(t_list **stack_a, int data);
//new function
void put_element_first(t_list **stack,int data);
int last_elemen(t_list **stack);
int is_inStack(int dataToFind, t_list **stack);
void put_element_first(t_list **stack,int data);
void push_a(t_list **stack_a,t_list **stack_b);
void set_last_elem(t_list **stack_a,int value);
int get_index(t_list **stack,int data);
void push_a(t_list **stack_a,t_list **stack_b);
void get_index2(t_list **stack,t_tool *t);
void push_element(t_list **stack_a,t_list **stack_b,t_tool *t);
int	check_place(t_list **stack_a, int x);
int	check_small_value(t_list **stack_a);
t_list *get_next_min(t_list **stack);
#endif