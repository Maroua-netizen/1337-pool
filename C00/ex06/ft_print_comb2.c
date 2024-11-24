/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:46:12 by mmounsif          #+#    #+#             */
/*   Updated: 2024/09/10 14:47:46 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	number(int i)
{
	char	l;
	char	r;

	l = i / 10 + '0';
	r = i % 10 + '0';
	write(1, &l, 1);
	write(1, &r, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			number(i);
			write(1, " ", 1);
			number(j);
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

// int main()
// {
// 	ft_print_comb2();
// }