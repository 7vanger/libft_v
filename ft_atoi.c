/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopes < vlopes@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 11:27:53 by vlopes            #+#    #+#             */
/*   Updated: 2022/05/18 17:02:27 by vlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	n;
	int	minus;
	int	a;

	n = 0;
	a = 0;
	minus = 1;
	while ((str[a] >= 9 && str[a] <= 13) ||str[a] == 32)
		a++;
	if (str[a] == '-')
		minus = -1;
	if (str[a] == '+' || str[a] == '-')
		a++;
	while (ft_isdigit(str[a]) && str[a] != 0)
	{
		n = n * 10 + (str[a] - '0');
		a++;
	}
	return (n * minus);
}
