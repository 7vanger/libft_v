/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopes < vlopes@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:53:03 by vlopes            #+#    #+#             */
/*   Updated: 2022/05/18 17:16:50 by vlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_ele, size_t n_range)
{
	void	*u;

	u = malloc(n_ele * n_range);
	if (!u)
		return (NULL);
	ft_bzero(u, n_ele * n_range);
		return (u);
}
