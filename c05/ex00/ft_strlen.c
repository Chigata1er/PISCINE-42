/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:28:12 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/20 09:38:35 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

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
/*
int	main()
{
	char b[] = "alibaba";
	int a = ft_strlen(b);
	printf("%d", a);
}*/
