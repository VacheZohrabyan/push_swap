/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 13:14:14 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/09 15:49:46 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_push_swap.h"

void	sa(t_stack **a, short flag)
{
	t_stack	*current;

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

void	sb(t_stack **b, short flag)
{
	if (!flag)
		write (1, "sb\n", 3);
	sa(b, !flag);
}

void	ss(t_stack **a, t_stack **b)
{
	write (1, "ss\n", 3);
	sa(a, 1);
	sb(b, 1);
}

void	pa(t_stack **a, t_stack **b, short flag)
{
	t_stack	*temp;

	if (!(b))
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = *a;
	*a = temp;
	if (!flag)
		write (1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b, short flag)
{
	pa(a, b, !flag);
	if (!flag)
		write (1, "pb\n", 3);
}
