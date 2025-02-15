/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:20:41 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/18 20:53:39 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
			return (0);
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>

int main() {
    char src[] = "b onjour";
    int b;

    b = ft_str_is_printable(src);
    printf("%d", b);

    return 0;
}
*/
