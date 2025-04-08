/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:01:32 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/08 22:48:16 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_push_swap.h"

static void sort_three(t_stack **a)
{
    int mek = (*a)->nbr;
    int erku = (*a)->next->nbr;
    int ereq = (*a)->next->next->nbr;
    if (mek > erku && erku < ereq && mek < ereq)
        sa(a, 0);
    else if (mek > erku && erku > ereq)
    {
        sa(a, 0);
        rra(a, 0);
    }
    else if (mek > erku && erku < ereq && mek > ereq)
        ra(a, 0);
    else if (mek < erku && erku > ereq && mek < ereq)
    {
        sa(a, 0);
        ra(a, 0);
    }
    else if (mek < erku && erku > ereq && mek > ereq)
        rra(a, 0);
}

static void sort_four(t_stack** a, t_stack** b)
{
    int min_position;
    min_position = find_position(*a, find_min(*a));
    while (min_position--)
        ra(a, 0);
    pb(b, a, 0);
    sort_three(a);
    pa(a, b, 0);
}

static void sort_five(t_stack** a, t_stack** b)
{
    int min_position;
    int i;

    i = 2;
    while (i--)
    {
        min_position = find_position(*a, find_min(*a));
        while (min_position--)
            ra(a, 0);
        pb(b, a, 0);
    }
    sort_three(a);
    pa(a, b, 0);
    pa(a, b, 0);
}

void push_a_to_b(t_stack** a, t_stack** b, int* counter, int n)
{
    while (*a)
    {
        if ((*a)->index <= *counter)
        {
            pb(b, a, 0);
            rb(b, 0);
            *counter += 1;
        }
        else if ((*a)->index <= *counter + n)
        {
            pb(b, a, 0);
            *counter += 1;
        }
        else 
            ra(a, 0);
    }
}

void push_b_to_a(t_stack** a, t_stack** b)
{
    size_t max_posiition;

    while (*b)
    {
        max_posiition = find_position(*b, find_max(*b));
        if (max_posiition <= ft_size_node(*b) / 2)
        {
            while (max_posiition-- > 0)
                rb(b, 0);
        }
        else 
        {
            while (max_posiition++ < ft_size_node(*b))    
                rrb(b, 0);
        }
        pa(a, b, 0);
    }
}

void ft_stack_sorted(t_stack** a, t_stack** b)
{
    int n;
    int size = ft_size_node(*a);
    int counter;
    
    if (ft_is_sorted(*a))
        return ;
    if (size == 2)
        return sa(a, 0);
    if (size == 3)
    {
        sort_three(a);
        return ;
    }
    if (size == 4)
    {
        sort_four(a, b);
        return ;
    }
    if (size == 5)
    {
        sort_five(a, b); 
        return ;
    }
    counter = 0;
    n = optimaize(ft_size_node(*a));
    push_a_to_b(a, b, &counter, n);
    push_b_to_a(a, b);
}