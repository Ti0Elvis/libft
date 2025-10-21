/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e06 <e06@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:23:36 by e06               #+#    #+#             */
/*   Updated: 2025/10/21 15:29:58 by e06              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *str, char const *set)
{
    size_t end;
    size_t start;

    if (!str || !set)
        return (NULL);
    start = 0;
    end = ft_strlen(str);
    while (ft_strchr(set, str[start]) && str[start])
        start++;
    while (ft_strchr(set, str[end - 1]) && end > start)
        end--;
    return (ft_substr(str, start, end - start));
}
