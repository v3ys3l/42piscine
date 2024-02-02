/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbicer <vbicer@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 06:37:57 by vbicer            #+#    #+#             */
/*   Updated: 2024/02/02 06:38:03 by vbicer           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int    x;
    unsigned int    y;

    x = 0;
    y = 0;
    while (dest[x])
    x++;
    while (y < nb && src[y])
    {
        dest[x + y] = src[y];
        y++;
    }
    dest[x + y] = '\0';
    return (dest);
}

int	main()
{
	char src[] = "Network";
	char dest[] = "42 ";
	printf("%s", ft_strncat(dest, src, 3));
}
