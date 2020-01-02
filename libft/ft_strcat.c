/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismelich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 15:47:54 by ismelich          #+#    #+#             */
/*   Updated: 2019/11/03 15:13:26 by ismelich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Appends the string pointed to by src to the end of the string pointed to
** by dest. dest=Hello src=World return HelloWorld.
*/

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (dest[l])
	{
		l++;
	}
	while (src[i])
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (dest);
}
