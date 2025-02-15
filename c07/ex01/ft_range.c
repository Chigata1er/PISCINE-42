/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:58:30 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/28 13:20:34 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = max - min;
	if (i <= 0)
		return (NULL);
	else
	{
		tab = (int *) malloc(i * sizeof(int));
		i = 0;
		while (min < max)
		{
			tab[i] = min;
			i++;
			min++;
		}
	}
	return (tab);
}
/*
int	main()
{
	int i = 0;
	int min = 0;
	int max = 100;
	while (i < (max - min))
	{
		printf("%d", ft_range(min, max)[i]);
		i++;
	}
	return 0;
}*/
