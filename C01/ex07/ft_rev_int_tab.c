/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:32:20 by mmounsif          #+#    #+#             */
/*   Updated: 2024/09/02 20:43:09 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab [i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

// #include <stdio.h>

// int	main (void)
// {
// 	int i;

// 	int arr[8] = {15,20,4,0,67,55,1,0};
// 	ft_rev_int_tab(arr, 8);
// 	i = 0;
// 	while(i < 8)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// 	return 0;
// }