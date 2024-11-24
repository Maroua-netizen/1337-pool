/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:31:33 by mmounsif          #+#    #+#             */
/*   Updated: 2024/09/19 15:01:18 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*strdup;
	int		i;

	strdup = (char *) malloc(ft_strlen(str) + 1);
	if (strdup == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		strdup[i] = str[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*final;
	int			i;

	final = malloc((ac + 1) * sizeof(t_stock_str));
	if (final == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		final[i].size = ft_strlen(av[i]);
		final[i].str = av[i];
		final[i].copy = ft_strdup(av[i]);
		i++;
	}
	final[i].str = 0;
	return (final);
}
