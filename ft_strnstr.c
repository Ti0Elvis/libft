/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e06 <e06@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:52:06 by e06               #+#    #+#             */
/*   Updated: 2025/10/21 15:23:23 by e06              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int j;

    i = 0;
    if (needle[0] == '\0')
        return ((char *)haystack);
    while (haystack[i] != '\0' && i < (int)len)
    {
        if (haystack[i] == needle[0])
        {
            j = 0;
            while (haystack[i + j] == needle[j] && (i + j) < (int)len)
            {
                if (needle[j + 1] == '\0')
                {
                    return ((char *)&haystack[i]);
                }
                j++;
            }
        }
        i++;
    }
    return (NULL);
}
