/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:43:16 by mmounsif          #+#    #+#             */
/*   Updated: 2024/09/19 19:38:41 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destlen;
	unsigned int	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size <= destlen)
		return (srclen + size);
	i = destlen;
	j = 0;
	while (src[j] && j < size - destlen - 1) 
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (destlen + srclen);
}

// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	char src[] = "abcdef";
// 	char dest[] = "123";
// 	printf("%lu\n", strlcat(dest, src, 5));
// 	printf("%u", ft_strlcat(dest, src, 5));
// }
