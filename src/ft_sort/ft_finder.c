/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finder.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:52:48 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/09 14:29:17 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_push_swap.h"

int	find_position(t_stack *a, int nbr)
{
	int	pos;

	pos = 0;
	while (a)
	{
		if (a->nbr == nbr)
			return (pos);
		++pos;
		a = a->next;
	}
	return (-1);
}

int	find_min(t_stack *a)
{
	int	min;

	min = a->nbr;
	while (a)
	{
		if (min >= a->nbr)
			min = a->nbr;
		a = a->next;
	}
	return (min);
}

int	find_max(t_stack *a)
{
	int	max;

	max = a->nbr;
	while (a)
	{
		if (max <= a->nbr)
			max = a->nbr;
		a = a->next;
	}
	return (max);
}

int	optimaize(int size)
{
	int	sqrt;
	int	log;

	sqrt = 1;
	log = 0;
	while (sqrt < size / sqrt)
		sqrt++;
	while (size)
	{
		size /= 2;
		log++;
	}
	return (sqrt + log - 1);
}
