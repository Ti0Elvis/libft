/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e06 <e06@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:55:14 by e06               #+#    #+#             */
/*   Updated: 2025/10/20 22:04:09 by e06              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t count_words(const char *s, int c)
{
    int i;
    size_t words;

    i = 0;
    words = 0;
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i] && s[i] != c)
        {
            words++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    return (words);
}

size_t calculate_word_len(const char *s, int start, int c)
{
    size_t len;

    len = 0;
    while (s[start + len] && s[start + len] != c)
        len++;
    return (len);
}

char *append_word(const char *s, int *index, int c)
{
    int i;
    size_t len;
    char *new_s;

    i = 0;
    len = calculate_word_len(s, *index, c);
    new_s = (char *)malloc((len + 1) * sizeof(char));
    if (!new_s)
        return (NULL);
    while (s[*index] && s[*index] != c)
    {
        new_s[i] = s[*index];
        i++;
        *index = *index + 1;
    }
    new_s[i] = '\0';
    return (new_s);
}

void free_split(char **arr, int j)
{
    while (j > 0)
        free(arr[--j]);
    free(arr);
}

char **ft_split(const char *s, char c)
{
    int i;
    int j;
    char **arr;

    if (!s)
        return (NULL);
    i = 0;
    j = 0;
    arr = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
    if (!arr)
        return (NULL);
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i] && s[i] != c)
        {
            arr[j] = append_word(s, &i, c);
            if (!arr[j])
                return (free_split(arr, j), NULL);
            j++;
        }
    }
    arr[j] = NULL;
    return (arr);
}
