/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chack_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:13:45 by marvin            #+#    #+#             */
/*   Updated: 2022/06/10 18:13:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void ft_free(char **str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    while (i >= 0)
        free(str[i--]);   
}

int ft_isnum(char *num)
{
    int i;

    i = 0;
    if(num[0]== '-')
        i++;
    while(num[i])
    {
        if (!ft_isdigit(num[i]))
            return(0);
        i++;
    }
    return(1);
}

int ft_contains(int num, char **argv, int i)
{
    i++;
    while (argv[i])
    {
        if(ft_atoi(argv[i]) == num)
            return(1);
        i++;
    }
    return (0);
}

void   ft_checkargs(int argc, char **argv)
{
    int i;
    long tmp;
    char **args;

    i = 0;
    if(argc == 2)
        args = ft_split(argv[1], ' ');
    else
    {
        i = 1;
        args = argv;
    }
    while (args[i])
    {
        tmp = ft_atoi(args[i]);
        if(!ft_isnum(args[i]))
            ft_printf("Error");
        if(ft_contains(tmp, args, i))
            ft_printf("Error");
        if(tmp < -2147483648 || tmp > 2147483647)
            ft_printf("Error");
        i++;
    }

    if (argc == 2)
        ft_free(args);
}
