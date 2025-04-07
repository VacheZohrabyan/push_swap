/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 17:28:42 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/07 15:23:29 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_push_swap.h"

void ft_update_index(t_stack** a)
{
    t_stack* current = *a;
    t_stack* temp;
    int i = 0;
    while (current) 
    {  
        i = 0;
        temp = (*a)->next;
        while (temp)
        {
            if (current->nbr > temp->nbr)      
                ++i;
            temp = temp->next;
        }
        current->index = i;
        current = current->next;
    }
}