/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:14:02 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/24 13:10:10 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *s2, char *s1, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s2[i] != '\0')
	{
		i++;
	}
	while (s1[j] != '\0' && j < nb)
	{
		s2[j + i] = s1[j];
		j++;
	}
	s2[j + i] = '\0';
	return (s2);
}
/*
#include <stdio.h>

int main() {
    char s1[] = "alibabababa";
    char s3[] = "alibabababa";

    char s2[20] = "bonjoutr  ";
    char s4[20] = "bonjoutr  ";

    int s = 5;
    ft_strncat(s2,s1, s);
    strncat(s4, s3, s);
    printf("%s\n", s2);
    printf("%s\n", s4);


    return 0;
}
*/
