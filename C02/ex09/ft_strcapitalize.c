/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 21:58:36 by mmounsif          #+#    #+#             */
/*   Updated: 2024/09/03 22:52:16 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 1;
	while (str[i])
	{
		if ((str[i - 1] <= 47 || (str[i - 1] >= 58 && str[i - 1] <= 64) 
				|| (str[i - 1] >= 91 && str[i - 1] <= 96) || str[i - 1] >= 123) 
			&& (str[i] >= 97 && str[i] <= 122))
		{
			str[i] -= 32;
		}
		i++;
	}
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}
	return (str);
}

// #include <stdio.h>

// int	main (void)
// {
// 	char str[] = "salut, COMMENT tu vas ?";
// 	printf ("%s\n", ft_strcapitalize(str));
// 	return 0;
// }