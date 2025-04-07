/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:32:53 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/05 10:46:54 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_push_swap.h"

void ft_free_double(char** inputs)
{
    size_t i = 0;
    while (inputs[i])
    {
        free(inputs[i]);
        inputs[i] = NULL;
        ++i;
    }
    free(*inputs);
    *inputs = NULL;
}

void ft_free(char** str)
{
    free(*str);
    *str = NULL;
}