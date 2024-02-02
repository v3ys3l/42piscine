/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbicer <vbicer@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 06:30:45 by vbicer            #+#    #+#             */
/*   Updated: 2024/02/02 06:32:04 by vbicer           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main()
{
	printf("%d\n", ft_strcmp("Veysel", "Veysel"));
	printf("%d\n", ft_strcmp("Veyselbiçer", "Veysel biçer"));
	printf("%d", ft_strcmp("veyselbiçer", "veyselbiçer"));
}
