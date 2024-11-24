/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:01:48 by mmounsif          #+#    #+#             */
/*   Updated: 2024/09/19 17:53:13 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			write(1, &"\\", 1);
			write(1, &"0123456789abcdef"[(unsigned char)str[i] / 16], 1);
			write(1, &"0123456789abcdef"[(unsigned char)str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

// int main()
// {
// 	char str[] = "Coucou\ntu vas bien ?";
// 	ft_putstr_non_printable(str);
// }