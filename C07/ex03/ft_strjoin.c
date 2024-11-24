/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 22:12:00 by mmounsif          #+#    #+#             */
/*   Updated: 2024/11/24 21:01:44 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	totallen(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += (size - 1) * ft_strlen(sep);
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;
	int		l;

	if (size == 0)
		str = (char *) malloc(1);
	else
		str = (char *) malloc(totallen(size, strs, sep) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		l = 0;
		while (i != size - 1 && sep[l])
			str[k++] = sep[l++];
		i++;
	}
	str[k] = '\0';
	return (str);
}

// #include <stdio.h>

// int main()
// {
// 	char *s[] = {"hi" , "bro", "good"};
// 	printf("%s\n", ft_strjoin(2, s, " /"));
// }
