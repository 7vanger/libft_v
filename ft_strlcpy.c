/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopes < vlopes@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:49:14 by vlopes            #+#    #+#             */
/*   Updated: 2022/05/18 15:28:49 by vlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t i)
{
	size_t n;
	size_t u;
	char	*ab;

	ab = (char *)source;
	n = 0;
	u = ft_strlen(ab);
	if(!destination)
		return (0);
	if (!i)
		return (u);
	while (ab[n] && n < i - 1)
	{
		destination[n] = ab[n];
		n++;
	}
	destination[n] = 0;
	return (u);
}
