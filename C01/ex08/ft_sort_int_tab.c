/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:25:15 by mmounsif          #+#    #+#             */
/*   Updated: 2024/09/03 20:06:25 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j <= size - 1)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

// #include <stdio.h>

// int	main (void)
// {
// 	int i;

// 	int arr[8] = {15,20,4,0,67,55,1,0};
// 	ft_sort_int_tab(arr, 8);
// 	i = 0;
// 	while(i < 8)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// 	return 0;
// }