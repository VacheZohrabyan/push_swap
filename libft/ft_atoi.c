/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 09:00:11 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/12 18:13:06 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static void	number_func(char *str, long int *number, int *flag)
{
	int	i;

	i = 0;
	if (str[i] == '-' && str[i + 1] == '\0')
	{
		free(str);
		write (2, "Error\n", 6);
		exit (0);
	}
	while (str[i])
	{
		if (((str[i] < '0' || str[i] > '9') && str[i] != '-')
			|| str[i + 1] == '-')
		{
			*flag = -3;
		}
		(*number) = (*number) * 10 + str[i] - '0';
		if (*number > 2147483647 || *number < -2147483648)
		{
			*flag = -3;
		}
		++i;
	}
}

long int	ft_atoi(char *str)
{
	long int	number;
	int			flag;

	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		++str;
	flag = 1;
	if (*str == '-')
	{
		flag = -1;
		++str;
	}
	else if (*str == '+')
		++str;
	while (*str == '-' || *str == '+')
	{
		return (-3);
	}
	number = 0;
	number_func(str, &number, &flag);
	if (flag == -3)
		return (-3);
	return (number * flag);
}
