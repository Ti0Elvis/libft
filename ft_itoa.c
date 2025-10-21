/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e06 <e06@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:30:05 by e06               #+#    #+#             */
/*   Updated: 2025/10/21 14:19:10 by e06              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t count_digits(int n)
{
    size_t count;

    count = 0;
    if (n <= 0)
        count++;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return (count);
}

char *ft_itoa(int n)
{
    long num;
    char *str;
    size_t len;

    num = n;
    len = count_digits(num);
    str = (char *)malloc(len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (num < 0)
    {
        str[0] = '-';
        num = -num;
    }
    if (num == 0)
        str[0] = '0';
    while (num > 0)
    {
        str[--len] = (num % 10) + '0';
        num /= 10;
    }
    return (str);
}
