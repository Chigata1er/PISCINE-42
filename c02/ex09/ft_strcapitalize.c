/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:14:35 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/20 11:28:33 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strupercase(str);
	if ((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (! (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (! (str[i] >= 'A' && str[i] <= 'Z'))
			{
				if (! (str[i] >= '0' && str[i] <= '9'))
				{
					if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
						str[i +1] = str[i + 1] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main() {

    char str[] = "bon5jour comment 42vous va mOnsieur+yeo-ib salut, comD
    FGHGHment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char b[10];

    ft_strcapitalize(str);
    printf("%s", str);

    return 0;
}
*/
