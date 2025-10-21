/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e06 <e06@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:23:32 by e06               #+#    #+#             */
/*   Updated: 2025/10/21 14:18:05 by e06              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t n, size_t size)
{
    void *ptr;

    if (n != 0 && size > SIZE_T_MAX / n)
        return (NULL);
    ptr = malloc(n * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, n * size);
    return (ptr);
}
