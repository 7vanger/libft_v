/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopes < vlopes@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:20:03 by vlopes            #+#    #+#             */
/*   Updated: 2022/05/20 12:07:37 by vlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_function(const char *first, char my)
{
	while (*first)
	{
		if(my == *first++)
			return (1);
	}
	return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*name;
	char	*other;
	char	*count;

	if (!s1 || !set )	
		return (0);
	other = (char *)s1;
	count = other + ft_strlen(s1);
	while (*other && my_function(set, *other))
		other++;
	while (count > other  && my_function(set, *(count - 1)))
		count--;
	name = ft_substr(other, 0,  (count - other));
	return (name);
}
