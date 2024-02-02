/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbicer <vbicer@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 06:33:10 by vbicer            #+#    #+#             */
/*   Updated: 2024/02/02 06:34:54 by vbicer           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    i;

    if (n == 0)
        return (0);
    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
        i++;
    return (s1[i] - s2[i]);
}

int	main()
{
	printf("%d\n", ft_strncmp("Veysel", "Veysel", 5));
	printf("%d\n", ft_strncmp("emreveysel", "emre veysel", 5));
	printf("%d\n", ft_strncmp("emreveysel", "emreveysel", 5));	
}
