/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopes < vlopes@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:06:52 by vlopes            #+#    #+#             */
/*   Updated: 2022/05/18 17:14:00 by vlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*name;
	int	i;

	i = 0;	
	while (s[i])
		i++;
	if(!(name = malloc(ft_strlen(s) + 1)))
		return (0);
	i = 0;
	while (s[i] != 0)
	{
		name[i] = s[i];
		i++;
	}
	name[i] = 0;
	return (name);
}
