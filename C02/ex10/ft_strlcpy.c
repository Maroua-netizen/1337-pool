/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 23:13:56 by mmounsif          #+#    #+#             */
/*   Updated: 2024/09/04 23:47:12 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
	{
		return (ft_strlen(src));
	}
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>

//  int	main(void)
//  { 	
// 	char src[] = "1237945";
//   	char dest[] = "abc";
//  	printf("src len: %u\n", ft_strlcpy(dest, src, 10));
// 	printf("dst: %s\n", dest);
//  	return 0;
//  }