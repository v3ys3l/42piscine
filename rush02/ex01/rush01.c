/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbicer <vbicer@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 05:36:47 by vbicer            #+#    #+#             */
/*   Updated: 2024/01/28 06:19:12 by vbicer           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	t;
	int	p;

	t = 1;
	while (t <= y && x > 0)
	{
		p = 1;
		while (p <= x)
		{
			if ((p == 1 && t == 1) || (p == x && t == y && p != 1 && t != 1))
				ft_putchar('/');
			else if ((p == x && t == 1) || (p == 1 && t == y))
				ft_putchar('\\');
			else if ((p == 1) || (p == x) || (t == 1) || (t == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			p++;
		}
		ft_putchar('\n');
		t++;
	}
}
