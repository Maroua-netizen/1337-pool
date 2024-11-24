/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 21:20:08 by mmounsif          #+#    #+#             */
/*   Updated: 2024/09/08 16:47:34 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	whitespaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' 
		|| str[i] == '\r' || str[i] == ' ')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	nmb;
	int	i;
	int	sign;

	nmb = 0;
	i = whitespaces(str);
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nmb *= 10;
		nmb = nmb + (str[i] - 48);
		i++;
	}
	return (nmb * sign);
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = " ---+--+1234ab567";
// 	printf("%d\n", ft_atoi(str));
// }