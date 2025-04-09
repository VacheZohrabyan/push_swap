/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chack_element.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 17:25:07 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/09 16:09:59 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_push_swap.h"

static short	ft_is_duplicate(long int num, char **inputs, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (num == ft_atoi(inputs[j]))
			return (0);
		++j;
	}
	return (1);
}

static void	inputs_node(char **inputs)
{
	int			i;
	long int	num;

	i = 0;
	while (inputs[i])
	{
		num = ft_atoi(inputs[i]);
		if (!ft_is_duplicate(num, inputs, i)
			|| (num > 2147483647 || num < -2147483648))
		{
			write (2, "Error\n", 6);
			exit(0);
		}
		++i;
	}
}

void	ft_chack_element(t_stack **a, int argc, char **argv)
{
	static char	*str;
	char		**inputs;
	int			i;

	i = 1;
	while (i < argc)
	{
		str = ft_strjoin(str, argv[i]);
		str = ft_strjoin(str, " ");
		++i;
	}
	inputs = ft_split(str, ' ');
	inputs_node(inputs);
	i = 0;
	while (inputs[i])
	{
		ft_push_back(&*a, ft_atoi(inputs[i]));
		++i;
	}
	ft_free_double(inputs);
	ft_free(&str);
	ft_update_index(a);
}
