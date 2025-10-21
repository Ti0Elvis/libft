/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e06 <e06@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:21:15 by e06               #+#    #+#             */
/*   Updated: 2025/10/20 20:21:26 by e06              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *src, int c, size_t n)
{
    size_t i;
    unsigned char *ptr;

    if (!src)
        return (NULL);
    i = 0;
    ptr = (unsigned char *)src;
    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (src);
}
