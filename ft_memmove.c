/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopes < vlopes@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:43:33 by vlopes            #+#    #+#             */
/*   Updated: 2022/05/18 16:59:04 by vlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	unsigned char	*src;
	unsigned char	*dest;
	size_t	i;

	src = (unsigned char *)source;
	dest = (unsigned char *)destination; 
	if (dest == src)
		return (destination);
	if (dest > src)
	{	
		i = 0;
		while (++i <= num)
		{
			dest[num - i] = src[num - i];
		}
	}
	else
	{
		i = 0;
		while (i < num)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (destination);
}
