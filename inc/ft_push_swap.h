/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:25:00 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/07 17:13:58 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP
#define FT_PUSH_SWAP

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

typedef struct s_stack
{
    struct s_stack *next;
    int nbr;
    int index;
} t_stack;

size_t ft_size_node(t_stack* a);
void ft_push_back(t_stack** a, int value);
t_stack* ft_pop_front(t_stack** a);
void ft_push(t_stack** a, t_stack* b);
void ft_chack_element(t_stack** a, int argc, char** argv);
void ft_update_index(t_stack** a);
size_t ft_strlen(const char* s1);
void ft_free_double(char** inputs);
void ft_free(char** str);
int ft_is_sorted(t_stack* a);

int find_max(t_stack* a);
int find_min(t_stack* a);
int find_position(t_stack* a, int nbr);
int optimaize(int size);
void ft_stack_sorted(t_stack** a, t_stack** b);

void sa(t_stack** a, short flag);
void rra(t_stack** a, short flag);
void ra(t_stack** a, short flag);
void rb(t_stack** b, short flag);
void pa(t_stack** a,t_stack**b, short flag);
void pb(t_stack** a,t_stack**b, short flag);
void rrb(t_stack** b, short flag);

#endif