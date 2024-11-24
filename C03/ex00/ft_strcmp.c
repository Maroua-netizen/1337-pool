/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 00:58:43 by mmounsif          #+#    #+#             */
/*   Updated: 2024/09/04 19:49:16 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char s1[] = "a";
// 	char s2[] = "a";

// 	printf("%d\n", ft_strcmp(s1, s2));
// 	return 0;
// }