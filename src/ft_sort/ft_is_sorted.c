/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:51:17 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/07 17:31:37 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_push_swap.h"

int ft_is_sorted(t_stack* a)
{
    t_stack* current = a;
    
    while (current)
    {
        if (current->nbr > current->next->index)
            return (0);
        current = current->next;
    }
    return (1);
}