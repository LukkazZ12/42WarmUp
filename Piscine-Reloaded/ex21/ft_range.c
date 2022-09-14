/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:25:25 by lucade-s          #+#    #+#             */
/*   Updated: 2022/08/31 22:39:06 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*i;
	int	j;
	int	diff;

	if (min >= max)
	{
		i = NULL;
		return (i);
	}
	diff = max - min;
	i = malloc((diff) * sizeof(int));
	j = 0;
	while (j < diff)
	{
		i[j] = min;
		min++;
		j++;
	}
	return (i);
}
