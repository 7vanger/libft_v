/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopes < vlopes@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:49:05 by vlopes            #+#    #+#             */
/*   Updated: 2022/05/18 16:42:41 by vlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*r;
	int	i;
	char	*n;
	char	s;
	
	s = (char)c; 
	r = (char *)str;
	i = 0;
	n = NULL;
	if(c == 0)
		n = (r + ft_strlen(r));
	while (r[i])
	{
		if (r[i] == c)
			n = &r[i];
		i++;		
	}
	return (n);
}
