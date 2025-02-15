/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:46:37 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/18 20:38:47 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
    char src[] = "4564855";
    int b;

    b = ft_str_is_numeric(src);
    printf("%d", b);

    return 0;
}*/
