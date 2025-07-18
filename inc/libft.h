/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 08:31:38 by vzohraby          #+#    #+#             */
/*   Updated: 2025/06/12 17:52:13 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char			**ft_split(char const *s, char c);
char			*ft_strjoin(char *s1, char const *s2);
size_t			ft_strlen(const char *s1);
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, unsigned int start, size_t len);
long int		ft_atoi(char *str);
unsigned short	ft_sqrt(int len);

#endif