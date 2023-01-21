
#include "checker.h"
#include "push_swap.h"
#

// void	pushchecker(t_list **stack_a, t_list **stack_b, char c)
// {
// 	t_list	*tmp;

// 	if (c == 'b' && *stack_a)
// 	{
// 		tmp = (*stack_a);
// 		*stack_a = tmp->next;
// 		ft_lstadd_front(stack_b, tmp);
// 	}
// 	if (c == 'a' && *stack_b)
// 	{
// 		tmp = (*stack_b);
// 		*stack_b = tmp->next;
// 		ft_lstadd_front(stack_a, tmp);
// 	}
// }

void	doop(t_list **stack_a, t_list **stack_b, char *s)
{
	if (!ft_strncmp(s, "sa\n", 3))
		sa(stack_a);
	else if (!ft_strncmp(s, "sb\n", 3))
		sb(stack_b)
	else if (!ft_strncmp(s, "pa\n", 3))
		pa(stack_a,stack_b)
	else if (!ft_strncmp(s, "pb\n", 3))
		pb(stack_a,stack_b)
	else if (!ft_strncmp(s, "ra\n", 3))
		ra(stack_a);
	else if (!ft_strncmp(s, "rb\n", 3))
		rb(stack_b);
	else if (!ft_strncmp(s, "ss\n", 3))
		ss(stack_a, stack_b);
	else if (!ft_strncmp(s, "rr\n", 3))
		rr(stack_a, stack_b);
	else if (!ft_strncmp(s, "rra\n", 3))
		rra(stack_a);
	else if (!ft_strncmp(s, "rrb\n", 3))
		rrb(stack_b);
	else if (!ft_strncmp(s, "rrr\n", 3))
		rrr(stack_a, stack_b);
	else
		ft_printf("Errore");
}

void	checker(t_list **stack_a, t_list **stack_b)
{
	char	*s;

	s = get_next_line(0);
	while (s)
	{
		doop(stack_a, stack_b, s);
		free(s);
		s = get_next_line(0);
	}
	free(s);
}

int *createarray(int ac,char ** av)
{
	int i=0;
	int *arr;
	ac--;
	arr=malloc(sizeof(int)*ac);
	if(arr==NULL)
		return(NULL);
	while(i<= ac)
	{
		arr[i]=atoi(av[i]);
		i++;
	}
	return(arr);
}
int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		*arr;

	if (ft_checkargs(ac, av))
		print_error();
	arr = createarray(ac, av);
	if (ac < 3)
		exit(0);
	if (!checkdup(arr, ac))
		print_error();
	bubblesort(arr, ac);
	createstack(&stack_a, ac, av);
	indexing(arr, stack_a, ac);
	checker(&stack_a, &stack_b);
	if (aissorted(&stack_a) && !ft_lstsize(stack_b))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (0);
}
