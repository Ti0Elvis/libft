/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e06 <e06@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:31:26 by e06               #+#    #+#             */
/*   Updated: 2025/10/21 14:32:53 by e06              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t dst_len;
    size_t src_len;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (dstsize <= dst_len)
        return (dstsize + src_len);
    i = 0;
    while (src[i] != '\0' && (dst_len + i + 1) < dstsize)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len);
}
