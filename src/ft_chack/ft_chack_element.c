/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chack_element.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 17:25:07 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/12 18:11:51 by vzohraby         ###   ########.fr       */
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
		if (num == -3)
		{
			ft_free_double(inputs);
			write(2, "Error\n", 6);
			exit(1);
		}
		if (!ft_is_duplicate(num, inputs, i)
			|| (num > 2147483647 || num < -2147483648))
		{
			ft_free_double(inputs);
			write (2, "Error\n", 6);
			exit(1);
		}
		++i;
	}
}

static int	is_empty(char *str, char *str1)
{
	int	i;

	i = 0;
	if ((str[i] == '-' || str[i] == '+') && str[i + 1] == '\0')
	{
		write(2, "Error\n", 6);
		if (str1)
			free(str1);
		exit(20);
	}
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		++i;
	}
	write(2, "Error\n", 6);
	if (str1)
		free(str1);
	exit(10);
}

void	ft_chack_element(t_stack **a, int argc, char **argv)
{
	char		*str;
	char		**inputs;
	int			i;

	i = 1;
	str = NULL;
	while (i < argc)
	{
		if (!is_empty(argv[i], str))
			str = ft_strjoin(str, argv[i]);
		str = ft_strjoin(str, " ");
		++i;
	}
	inputs = ft_split(str, ' ');
	ft_free(&str);
	inputs_node(inputs);
	i = 0;
	while (inputs[i])
	{
		ft_push_back(a, ft_atoi(inputs[i]));
		++i;
	}
	ft_free_double(inputs);
	ft_update_index(a);
}
