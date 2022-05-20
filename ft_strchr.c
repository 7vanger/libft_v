/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopes < vlopes@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:45:59 by vlopes            #+#    #+#             */
/*   Updated: 2022/05/18 16:49:19 by vlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	char	*p;
	int	i;
	char	o;

	p = (char *)str;
	i = 0;
	o = (char)c;
	while (p[i] != 0)
	{	
		if (p[i] == o)
			return (p + i);
		i++;
	}
	if (p[i] == 0 && o == 0)
		return (p + i);
	return (0);
}
