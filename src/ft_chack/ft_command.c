/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 13:14:14 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/08 22:47:08 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_push_swap.h"

void sa(t_stack** a, short flag)
{
    t_stack* current;
    if (!flag)
        write (1, "sa\n", 3);
    if (!(*a) || !(*a)->next)
        return ;
    current = *a;
    *a = (*a)->next;
    current->next = (*a)->next;
    (*a)->next = current;
    return ;
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
    t_stack* temp;
    if (!(b))
        return;
    temp = *b;
    *b = (*b)->next;
    temp->next = *a;
    *a = temp;
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
    if (!flag)
        write (1, "ra\n", 3);
    t_stack	*temp;
	t_stack	*current;

	if (!*a || !(*a)->next)
		return ;
	temp = *a;
	*a = (*a)->next;
	current = *a;
	while (current->next)
		current = current->next;
	current->next = temp;
	temp->next = NULL;
	return ;
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
    t_stack* temp;
    t_stack* current;

    temp = *a;
    while (temp->next->next)
        temp = temp->next;
    current = temp->next;
    current->next = *a;
    temp->next = NULL;
    *a = current;
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