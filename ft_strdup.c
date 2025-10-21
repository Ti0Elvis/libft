/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e06 <e06@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:12:52 by e06               #+#    #+#             */
/*   Updated: 2025/10/20 22:14:54 by e06              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *copy;
    size_t len;

    if (!s1)
        return (NULL);
    len = ft_strlen(s1);
    copy = (char *)malloc(len + 1);
    if (!copy)
        return (NULL);
    ft_memcpy(copy, s1, len);
    copy[len] = '\0';
    return (copy);
}
