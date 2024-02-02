/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbicer <vbicer@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 06:35:41 by vbicer            #+#    #+#             */
/*   Updated: 2024/02/02 06:37:26 by vbicer           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
{
    int    x;
    int    y;

    x = 0;
    while (dest[x])
        x++;
    y = 0;
    while (src[y])
    {
        dest[x + y] = src[y];
        y++;
    }
    dest[x + y] = '\0';
    return (dest);
}

int	main()
{
	char src[] = "veysel";
	char dest[] = "biçer";
	printf("%s", ft_strcat(dest, src));
}
