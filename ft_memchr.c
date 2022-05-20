/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopes < vlopes@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:49:31 by vlopes            #+#    #+#             */
/*   Updated: 2022/05/18 16:53:26 by vlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*r;
	size_t	i;

	r = (unsigned char *)str;
	i = 0;
	if (n == 0)
		return 0;
	while (i < n)
	{
		if (*r == (unsigned char)c)
		{	
			return ((void *)r);
		}
		else
			r++;
		i++;
	}
	return (0);
}
