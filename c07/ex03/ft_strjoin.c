/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:58:30 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/30 16:11:50 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	join(char **strs, int size, char *sep)
{
	int	o;
	int	taile;

	taile = 0;
	o = 0;
	while (o < size)
	{
		taile += (ft_strlen(strs[o++]));
	}
	taile += ft_strlen(sep) * (size - 1);
	return (taile);
}

char	*retourss(int size, char **strs, char *sep, char *result)
{
	int		i;
	int		h;
	int		k;

	i = 0;
	h = 0;
	while (h < size)
	{
		k = 0;
		while (strs[h][k] != '\0')
			result[i++] = strs[h][k++];
		if (h < (size -1))
		{
			k = 0;
			while (sep[k] != '\0')
				result[i++] = sep[k++];
		}
		h++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		taile;

	taile = join(strs, size, sep);
	result = (char *)malloc((taile + 1) * sizeof(char));
	if (size == 0)
	{
		result = "";
		return (result);
	}
	result = retourss(size, strs, sep, result);
	return (result);
}
/*
int	main()
{
	char *sep = "--";
	char *str[] = {"hdibc", "jhrrj", "jrtung"};
	printf("%s", ft_strjoin(3,str, sep));
	return 0;
}*/
