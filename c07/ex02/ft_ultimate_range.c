/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:58:30 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/30 16:22:01 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((size + 1) * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
int	main()
{
	int  *range;
	int min = 0;
	int max = 100;
	printf("%d", ft_ultimate_range(&range, min, max));
	return 0;
}*/
