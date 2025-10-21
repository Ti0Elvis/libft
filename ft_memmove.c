/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e06 <e06@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:27:11 by e06               #+#    #+#             */
/*   Updated: 2025/10/21 14:28:00 by e06              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;

    if (!dst && !src)
        return (NULL);
    if (dst > src)
    {
        i = len;
        while (i > 0)
        {
            i--;
            ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        }
    }
    else
    {
        i = 0;
        while (i < len)
        {
            ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return (dst);
}
