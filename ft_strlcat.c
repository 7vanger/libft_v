/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopes < vlopes@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:54:18 by vlopes            #+#    #+#             */
/*   Updated: 2022/05/18 16:28:19 by vlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	num;
	size_t	a;
	size_t	b;
	char	*u;
	size_t	ans;

	num = 0;
	u = (char *)src;
	a = ft_strlen(dest);
	b = ft_strlen(u);
	ans = 0;
	if (size > a)
		ans = (a + b);
	else
		ans = (b + size);
	while (u[num] && (a + 1) < size)
	{
		dest[a] = u[num];
		num++;
		a++;
	}
	dest[a] = 0;
	return (ans);
}
