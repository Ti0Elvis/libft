/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e06 <e06@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:00:30 by e06               #+#    #+#             */
/*   Updated: 2025/10/21 14:30:59 by e06              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len1;
    size_t len2;
    char *new_str;

    if (!s1 || !s2)
        return (NULL);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    new_str = (char *)malloc(len1 + len2 + 1);
    if (!new_str)
        return (NULL);
    ft_memcpy(new_str, s1, len1);
    ft_memcpy(new_str + len1, s2, len2);
    new_str[len1 + len2] = '\0';
    return (new_str);
}
