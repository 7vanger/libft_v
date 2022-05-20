/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopes < vlopes@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:00:24 by vlopes            #+#    #+#             */
/*   Updated: 2022/05/18 17:39:53 by vlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*name;
	int	i;

	i = 0;
	if (s1 == NULL)
		return 0;
	name = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!name)
		return 0;
	while (*s1 != 0)
	{
		name[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != 0)
	{
		name[i] = *s2;
		i++;
		s2++;
	}
	name[i] = 0;
	return (name);
}	
