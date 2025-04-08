/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:51:17 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/08 13:16:44 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_push_swap.h"

int ft_is_sorted(t_stack* a)
{
    t_stack* current = a;
    printf("ft_is_sorted\n");
    printf("node = %d\n", a->nbr);
    printf("node = %d\n", a->next->nbr);
    printf("node = %d\n", a->next->next->nbr);
    while (current)
    {
        if (current->nbr > current->next->index)
            return (0);
        current = current->next;
    }
    printf("ft_is_sorted\n");
    return (1);
}