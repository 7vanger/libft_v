/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopes < vlopes@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:19:19 by vlopes            #+#    #+#             */
/*   Updated: 2022/05/17 12:44:06 by vlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{	
	size_t	i;
	char	*name1;
	char	*name2;

	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	name1 = (char *)dest;
	name2 = (char *)src;
	while (i < n)
	{
		name1[i] = name2[i];
		i++;
	}
	return (dest);
}
