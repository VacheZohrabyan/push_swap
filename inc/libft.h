/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 08:31:38 by vzohraby          #+#    #+#             */
/*   Updated: 2025/04/05 11:00:01 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_HIDDER
#define LIBFT_HIDDER

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *s1, char const *s2);
size_t ft_strlen(const char* s1);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
long int	ft_atoi(const char *str);
unsigned short ft_sqrt(int len);

#endif