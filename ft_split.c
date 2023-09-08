/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:08:04 by fseles            #+#    #+#             */
/*   Updated: 2023/09/08 12:08:06 by fseles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	number_of_elements (char const *s, char c)
{
	size_t noe;
	size_t i;

	i = 0;
	noe = 0;
	while(s[i] != '\0')
	{
		if(s[i] != c)
		{
			noe ++;
			while ((s[i] != c) && (s[i] != '\0'))
				i++;
		}
		i++;
	}
	return (noe); 
	
}
char **ft_split(char const *s, char c)
{
	return (NULL);
}

#include "libft.h"
#include <stdio.h> 

int main()
{
	char s1[] = "Filip.a.b..c."; 
	printf("%zu", number_of_elements(s1, '.'));
	return (0);
}