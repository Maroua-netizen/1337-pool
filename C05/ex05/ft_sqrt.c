/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:52:47 by mmounsif          #+#    #+#             */
/*   Updated: 2024/09/11 18:53:25 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	rslt;

	rslt = 1;
	if (nb == 1)
		return (1);
	while (rslt <= (nb / 2))
	{
		if (nb / rslt == rslt && nb % rslt == 0)
			return (rslt);
		rslt++;
	}
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d\n", ft_sqrt(8));
// }