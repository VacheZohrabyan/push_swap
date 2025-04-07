/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_push_pop.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:05:23 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/07 17:09:05 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_push_swap.h"

void ft_push_back(t_stack** a, int value)
{
    t_stack* newNode = (t_stack*)malloc(sizeof(t_stack));
    t_stack* current = *a;
    
    if (!newNode)
        return ;
    if (!(*a))
    {
        *a = newNode;
        (*a)->next = NULL;
        (*a)->nbr = value;
        (*a)->index = 0;
    } else {
        while (current->next)
            current = current->next;
        current->next = newNode;
        newNode->nbr = value;
    }
}

t_stack* ft_pop_front(t_stack** a)
{
    t_stack* current = *a;
    *a = (*a)->next;
    current->next = *a;
    *a = current;
    return (current);
}

void ft_push(t_stack** a, t_stack* b)
{
    t_stack* current = *a;
    while (current->next)
        current = current->next;
    current->next = b;
}