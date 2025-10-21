/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e06 <e06@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:45:33 by e06               #+#    #+#             */
/*   Updated: 2025/10/20 22:16:27 by e06              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *ptr1;
    const unsigned char *ptr2;

    if (!dst && !src)
        return (NULL);
    i = 0;
    ptr1 = (unsigned char *)dst;
    ptr2 = (const unsigned char *)src;
    while (i < n)
    {
        ptr1[i] = ptr2[i];
        i++;
    }
    return (dst);
}
