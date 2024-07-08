/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_handling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:54:45 by mmuhaise          #+#    #+#             */
/*   Updated: 2024/07/08 14:22:19 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	is_args_number(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0)
			{
				if (!(j == 0 && argv[i][j] == '-'))
					return (-1);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	is_duplicate_number(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 2)
	{
		if (ft_atoi(argv[0]) == 2147483650)
			return (-1);
	}
	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (ft_atoi(argv[i]) == 2147483650 \
				|| ft_atoi(argv[j]) == 2147483650)
				return (-1);
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_handle_errors(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	if (is_args_number(argc, argv) == -1)
	{
		ft_putstr_fd("Error\n", 1);
		return (-1);
	}
	if (is_duplicate_number(argc, argv) == -1)
	{
		ft_putstr_fd("Error\n", 1);
		return (-1);
	}
	return (1);
}
