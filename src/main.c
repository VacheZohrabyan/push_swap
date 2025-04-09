/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 22:45:42 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/09 13:23:27 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
	{
		write (2, "Error\n", 6);
		return (0);
	}
	a = NULL;
	b = NULL;
	ft_chack_element(&a, argc, argv);
	while (!ft_is_sorted(a))
	{
		ft_stack_sorted(&a, &b);
	}
}
