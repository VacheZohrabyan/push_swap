/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:05:54 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/08 10:36:34 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_push_swap.h"

void	sort_three(t_stack **a)
{
	int	mek;
	int	erku;
	int	ereq;

	mek = (*a)->nbr;
	erku = (*a)->next->nbr;
	ereq = (*a)->next->next->nbr;
	if (mek > erku && erku < ereq && mek < ereq)
		sa(a, 0);
	else if (mek > erku && erku > ereq)
	{
		sa(a, 0);
		rra(a, 0);
	}
	else if (mek > erku && erku < ereq && mek > ereq)
		ra(a, 0);
	else if (mek < erku && erku > ereq && mek < ereq)
	{
		sa(a, 0);
		ra(a, 0);
	}
	else if (mek < erku && erku > ereq && mek > ereq)
		rra(a, 0);
}

void	sort_four(t_stack **a, t_stack **b)
{
	int	min_position;

	min_position = find_position(*a, find_min(*a));
	while (min_position--)
		ra(a, 0);
	pb(b, a, 0);
	sort_three(a);
	pa(a, b, 0);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	min_position;
	int	i;

	i = 2;
	min_position = find_position(*a, find_min(*a));
	while (i--)
	{
		min_position = find_position(*a, find_min(*a));
		if (min_position != 4)
			while (min_position--)
				ra(a, 0);
		else
			rra(a, 0);
		pb(b, a, 0);
	}
	sort_three(a);
	pa(a, b, 0);
	pa(a, b, 0);
}
