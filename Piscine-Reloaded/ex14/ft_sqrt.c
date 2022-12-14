/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:25:25 by lucade-s          #+#    #+#             */
/*   Updated: 2022/08/29 21:28:48 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb > 2147395600)
		return (0);
	else
	{
		while (i <= 46340)
		{
			if (i * i == nb)
				return (i);
			else if (i * i < nb)
				i++;
			else
				return (0);
		}
	}
	return (0);
}
