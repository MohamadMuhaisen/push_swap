/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_extended.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 17:58:42 by mmuhaise          #+#    #+#             */
/*   Updated: 2024/06/29 17:59:04 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_node *stack)
{
	t_node	*current;
	t_node	*tail;
	int		temp;

	current = stack;
	if (stack == NULL || stack->next == NULL)
	{
		return ;
	}
	while (current->next != NULL)
		current = current->next;
	tail = current;
	current = tail;
	temp = current->data;
	while (current->prev != NULL)
	{
		current->data = current->prev->data;
		current = current->prev;
	}
	current->data = temp;
}

void	reverse_rotate_both(t_node *s1, t_node *s2)
{
	reverse_rotate(s1);
	reverse_rotate(s2);
}
