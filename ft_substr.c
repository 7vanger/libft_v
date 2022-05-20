/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopes < vlopes@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 00:44:21 by vlopes            #+#    #+#             */
/*   Updated: 2022/05/18 17:40:47 by vlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*name;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	if (!(name = malloc((len + 1) * sizeof(char))))
		return NULL;
	if (start >= ft_strlen(s))
		return name;
	while (i < len)
	{
		name[i] = s[i+start];
		i++;
	}
	name[i] = 0;
	return (name);
}
