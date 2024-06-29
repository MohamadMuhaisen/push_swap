/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:29:21 by mmuhaise          #+#    #+#             */
/*   Updated: 2024/06/29 22:00:21 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		i;

	a = NULL;
	b = NULL;
	i = 0;
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		i = 1;
	while (argv[i])
	{
		insert_at_end(&a, ft_atoi(argv[i]));
		i++;
	}
	if (has_duplicates(a))
	{
		ft_printf("Error");
		return (1);
	}
	if (is_sorted(a))
		return (0);
	else
	{
		if (stack_len(a) == 2)
		{
			swap(a);
			ft_printf("sa\n");
		}
		else if (stack_len(a) == 3)
		{
			sort_three(&a);
		}
	}
	print_list(a);
	free_stacks(a, b);
	return (0);
}
