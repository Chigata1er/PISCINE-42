/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyeo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:31:39 by ibyeo             #+#    #+#             */
/*   Updated: 2024/09/18 20:19:07 by ibyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "bonyfdyjour";
    char dest[20]; 
    char dests[20];

    ft_strcpy(dest, src);
    strcpy(dests, src);
    printf("%s\n", dest);
    printf("%s\n",dests);

    return 0;
}*/
