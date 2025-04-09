/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_push_pop.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:05:23 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/09 15:39:22 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_push_swap.h"

void	ft_push_back(t_stack **a, int value)
{
	t_stack	*newnode;
	t_stack	*current;

	current = *a;
	newnode = (t_stack *)malloc(sizeof(t_stack));
	if (!newnode)
		return ;
	if (!(*a))
	{
		*a = newnode;
		(*a)->next = NULL;
		(*a)->nbr = value;
		(*a)->index = 0;
	}
	else
	{
		while (current->next)
			current = current->next;
		current->next = newnode;
		newnode->nbr = value;
	}
}

void	ft_push_a(t_stack **a, t_stack *current)
{
	t_stack	*tmp;

	tmp = *a;
	if (!(*a))
		*a = current;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp = current;
	}
}

t_stack	*ft_pop_front(t_stack **a)
{
	t_stack	*current;

	current = *a;
	*a = (*a)->next;
	current->next = *a;
	*a = current;
	return (current);
}
