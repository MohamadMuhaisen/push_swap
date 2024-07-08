/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:54:45 by mmuhaise          #+#    #+#             */
/*   Updated: 2024/07/08 14:22:16 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_free(char **split_list, int tofree)
{
	int	i;

	if (tofree)
	{
		i = 0;
		while (split_list[i] != 0)
		{
			free(split_list[i]);
			i++;
		}
		free(split_list[i]);
		free(split_list);
	}
}

int	main(int argc, char **argv)
{
	int		error;
	t_elem	*stack_a;
	t_elem	*stack_b;
	char	**split_list;
	int		tofree;

	tofree = 0;
	argv++;
	split_list = argv;
	if (argc == 2)
		split_list = split_args(&argc, argv, &tofree);
	error = ft_handle_errors(argc, split_list);
	if (error == -1 || error == 0)
	{
		ft_free(split_list, tofree);
		return (0);
	}
	stack_a = create_tab(argc, split_list, 1);
	stack_b = create_tab(argc, split_list, 0);
	ft_free(split_list, tofree);
	solve_stdin(stack_a, stack_b);
	free(stack_a);
	free(stack_b);
	return (0);
}
