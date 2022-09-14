/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:25:25 by lucade-s          #+#    #+#             */
/*   Updated: 2022/09/01 02:27:22 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		k;
	char	buf[4096];

	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	i = open(argv[1], O_RDONLY);
	j = read(i, buf, 4096);
	buf[j] = '\0';
	ft_putstr(buf);
	k = close(3);
	return (0);
}
