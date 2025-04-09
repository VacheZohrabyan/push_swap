/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:44:47 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/09 15:46:03 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_push_swap.h"

void	rra(t_stack **a, short flag)
{
	t_stack	*temp;
	t_stack	*current;

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

void	rrb(t_stack **b, short flag)
{
	rra(b, !flag);
	if (!flag)
		write (1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b, short flag)
{
	rra(a, flag);
	rrb(b, flag);
	write (1, "rrr\n", 4);
}
