/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:32:17 by mmounsif          #+#    #+#             */
/*   Updated: 2024/09/05 13:23:27 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j]) 
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char s1[] = "Oh ";
// 	char s2[] = "My GOD!";	
// 	printf("%s\n", ft_strcat(s1, s2));
// 	return 0;
// }