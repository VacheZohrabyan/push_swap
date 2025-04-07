/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 13:14:14 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/07 17:07:10 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_push_swap.h"

void sa(t_stack** a, short flag)
{
    t_stack* current;
    if (!flag)
        write (1, "sa\n", 3);
    current = *a;
    (*a)->index = 1;
    *a = (*a)->next;
    current = *a;
    *a = current;
    (*a)->index = 0;
}

void sb(t_stack** b, short flag)
{
    if (!flag)
        write (1, "sb\n", 3);
    sa(b, 1);
}

void ss(t_stack** a, t_stack** b)
{
    write (1, "ss\n", 3);
    sa(a, 1);
    sb(b, 1);    
}

void pa(t_stack** a,t_stack**b, short flag)
{
    t_stack* b_node = ft_pop_front(b);
    ft_push(a, b_node);
    if (!flag)
        write (1, "pa\n", 3);   
}

void pb(t_stack** a,t_stack**b, short flag)
{
    pa(a, b, 1);
    if (!flag)
        write (1, "pb\n", 3);   
}

void ra(t_stack** a, short flag)
{
    t_stack* current = ft_pop_front(a);
    ft_push_back(&current, current->nbr);
    if (!flag)
        write (1, "ra\n", 3);
}

void rb(t_stack** b, short flag)
{
    ra(b, flag);
    if (!flag)
        write (1, "rb\n", 3);
}

void rr(t_stack** a, t_stack** b, short flag)
{
    ra(a, flag);
    rb(b, flag);
    write (1, "rr\n", 3);
}

void rra(t_stack** a, short flag)
{
    t_stack* current = *a;
    current = ft_pop_front(a);
    ft_push_back(a, current->index);
    if (!flag)
        write (1, "rra\n", 4);
}

void rrb(t_stack** b, short flag)
{
    rra(b, flag);
    if (!flag)
        write (1, "rrb\n", 4);
}

void rrr(t_stack** a, t_stack** b, short flag)
{
    rra(a, flag);
    rrb(b, flag);
    write (1, "rrr\n", 4);
}