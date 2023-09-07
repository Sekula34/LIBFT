/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:23:29 by fseles            #+#    #+#             */
/*   Updated: 2023/09/07 10:23:31 by fseles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int ft_isspace(int c)
{
	if(c == ' ' || c == '\f' || c == '\n')
		return (1); 
	if(c == '\r' || c == '\t' || c == '\v')
		return (1); 
	return (0); 
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int atoi(const char *nptr)
{
	int i; 
	int sign;
	long result; 

	sign = 1;
	i = 0;
	result = 0; 
	while (ft_isspace(nptr[i]))
		i++;
	if(nptr[i] == '+' || nptr[i] == '-')
	{
		if(nptr[i] == '-')
			sign = -1; 
		i++; 
	}
	while(ft_isdigit(nptr[i]))
	{
		result = result * 10 + (nptr[i] - 48);
		i++;
	}
	return((int)(result * sign)); 
}