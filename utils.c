/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:54:45 by mmuhaise          #+#    #+#             */
/*   Updated: 2024/06/29 21:17:15 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_duplicates(t_node *stack)
{
	t_node	*ptr1;
	t_node	*ptr2;

	ptr1 = stack;
	while (ptr1 != NULL)
	{
		ptr2 = ptr1->next;
		while (ptr2 != NULL)
		{
			if (ptr1->data == ptr2->data)
			{
				return (1);
			}
			ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
	return (0);
}

int	stack_len(t_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

void	free_stacks(t_node *s1, t_node *s2)
{
	t_node	*tmp;

	while (s1)
	{
		tmp = s1->next;
		free(s1);
		s1 = tmp;
	}
	while (s2)
	{
		tmp = s2->next;
		free(s2);
		s2 = tmp;
	}
}

t_node	*get_max(t_node *stack)
{
	t_node	*max;
	t_node	*current;

	max = stack;
	current = NULL;
	if (stack == NULL)
		return (current);
	current = stack->next;
	while (current != NULL)
	{
		if (current->data > max->data)
			max = current;
		current = current->next;
	}
	return (max);
}
