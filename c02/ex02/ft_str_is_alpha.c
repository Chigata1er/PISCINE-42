/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:25:32 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/20 10:31:23 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
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
int main() {
    char src[] = "bonjour";
    int b;

    b = ft_str_is_alpha(src);
    printf("%d",b);

    return 0;
}*/
