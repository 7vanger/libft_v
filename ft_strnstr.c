/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopes < vlopes@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:17:39 by vlopes            #+#    #+#             */
/*   Updated: 2022/05/18 16:13:34 by vlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t c)
{
	size_t	i;
	size_t	m;

	i = 0;
	if (*little == 0 || little == NULL)
		return ((char *)big);
	while (big[i] && i < c)
	{	
		m = 0;
		while (little[m] == big[i + m] && i + m < c)
		{
			if(little[m + 1] == 0)
				return ((char *)big + i);
			m++;
		}
		i++;
	}
	return (0);
}
