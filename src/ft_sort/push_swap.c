/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:01:32 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/07 12:22:24 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_push_swap.h"

void	push_a_to_b(t_stack **a, t_stack **b, int *counter, int n)
{
	while (*a)
	{
		if ((*a)->index <= *counter)
		{
			pb(b, a, 0);
			rb(b, 0);
			(*counter)++;
		}
		else if ((*a)->index <= *counter + n)
		{
			pb(b, a, 0);
			(*counter)++;
		}
		else
			ra(a, 0);
	}
}

void	push_b_to_a(t_stack **a, t_stack **b)
{
	size_t	max_posiition;

	while (*b)
	{
		max_posiition = find_position(*b, find_max(*b));
		if (max_posiition <= ft_size_node(*b) / 2)
		{
			while (max_posiition-- > 0)
				rb(b, 0);
		}
		else
		{
			while (max_posiition++ < ft_size_node(*b))
				rrb(b, 0);
		}
		pa(a, b, 0);
	}
}

void	ft_stack_sorted(t_stack **a, t_stack **b)
{
	int	n;
	int	size;
	int	counter;

	size = ft_size_node(*a);
	if (ft_is_sorted(*a))
		return ;
	if (size == 2)
		return (sa(a, 0));
	if (size == 3)
		return (sort_three(a));
	if (size == 4)
		return (sort_four(a, b));
	if (size == 5)
		return (sort_five(a, b));
	counter = 0;
	n = optimaize(ft_size_node(*a));
	push_a_to_b(a, b, &counter, n);
	push_b_to_a(a, b);
}
