/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:15:59 by fseles            #+#    #+#             */
/*   Updated: 2023/09/08 10:16:01 by fseles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_in_char_set(char const c, char const *set)
{
	int	i; 

	i = 0; 
	while (set[i] != '\0')
	{
		if(set[i] == c)
			return (1); 
		i ++; 
	}
	return (0); 
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t starting_index; 
	size_t substract_end;
	size_t i;
	char *p;

	starting_index = 0; 
	substract_end = 0;
	i = 0;
	while(is_in_char_set(s1[starting_index], set))
		starting_index ++; 
	while(is_in_char_set(s1[ft_strlen(s1) - 1 - substract_end], set))
		substract_end ++; 
	p = ft_calloc(ft_strlen(s1) + 1 - starting_index - substract_end, sizeof(char));
	if(p == NULL)
		return(NULL); 
	while(starting_index < (ft_strlen(s1) - substract_end))
	{
		p[i] = s1[starting_index]; 
		i++;
		starting_index++;
	}
	return (p);
}

#include<stdio.h>
int main()
{
	char s[] = " Filip  ";
	char s1[] = " ";
	char *p1; 

	p1 = ft_strtrim(s, s1); 
	printf("%s", p1); 
	free(p1); 
	return (0); 
}