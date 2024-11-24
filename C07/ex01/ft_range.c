/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:03:12 by mmounsif          #+#    #+#             */
/*   Updated: 2024/09/15 17:40:01 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc((max - min) * 4);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

// #include <stdio.h>

// int main()
// {
// 	int	*arr;
// 	int	i;

// 	arr = ft_range(0, 10);
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// }
