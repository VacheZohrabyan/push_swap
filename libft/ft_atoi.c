/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 09:00:11 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/09 16:25:58 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static void	number_func(const char *str, long int *number)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			write (2, "Error\n", 6);
			exit (0);
		}
		(*number) = (*number) * 10 + str[i] - '0';
		++i;
	}
}

long int	ft_atoi(const char *str)
{
	long int	number;
	int			flag;
	int			i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		++i;
	flag = 1;
	if (str[i] == '-')
	{
		flag = -1;
		++i;
	}
	else if (str[i] == '+')
		i++;
	number = 0;
	number_func(str, &number);
	return (number * flag);
}
