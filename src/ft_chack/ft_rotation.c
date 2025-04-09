/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:39:59 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/09 15:45:39 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_push_swap.h"

void	ra(t_stack **a, short flag)
{
	t_stack	*temp;
	t_stack	*current;

	if (!flag)
		write (1, "ra\n", 3);
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

void	rb(t_stack **b, short flag)
{
	ra(b, !flag);
	if (!flag)
		write (1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b, short flag)
{
	ra(a, flag);
	rb(b, flag);
	write (1, "rr\n", 3);
}
