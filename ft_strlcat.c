/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:15:03 by fseles            #+#    #+#             */
/*   Updated: 2023/09/06 12:15:05 by fseles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

static size_t	lengthf_of_str(const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++; 
	}
	return (i); 
}


size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int length; 

	i = 0;
	length = lengthf_of_str(dst); 
	while (size > 1)
	{
		dst[length + i] = src[i]; 
		i++; 
		size--; 
	}
	if (size > 0)
	{
		dst[length + i] = '\0';
		i++; 
	}
	return (lengthf_of_str(src) + length); 
}