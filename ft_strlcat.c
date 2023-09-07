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

#include "libft.h"

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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	length; 
	int	length_src;

	i = 0;
	length = lengthf_of_str(dst);
	length_src = lengthf_of_str(src); 
	while ((size > 1) && src[i] != '\0')
	{
		*(dst + length + i) = *(src + i);
		i++;
		size--; 
	}
	if (size > 0)
	{
		dst[length + i] = '\0';
		i++; 
	}
	return (length_src + length); 
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char first[50] = "This is ";
//     char last[] = "a potentially long string";
//     int r;
//     int size = 160;
//     char buffer[size];

//     strcpy(buffer,first);
//     r = ft_strlcat(buffer,last,size);

//     puts(buffer);
//     printf("Value returned: %d\n",r);
//     if( r > size )
//         puts("String truncated");
//     else
//         puts("String was fully copied");

//     return(0);
// }