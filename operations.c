/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:29:59 by mmuhaise          #+#    #+#             */
/*   Updated: 2024/06/29 18:58:46 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_node **src, t_node **dest)
{
	int	temp;

	if (src == NULL)
		return ;
	temp = pop(src);
	insert_at_beginning(dest, temp);
}

void	swap(t_node *stack)
{
	int	temp;

	if (stack->next)
	{
		temp = stack->data;
		stack->data = stack->next->data;
		stack->next->data = temp;
	}
}

void	swap_both(t_node *s1, t_node *s2)
{
	swap(s1);
	swap(s2);
}

void	rotate(t_node *stack)
{
	int	temp;

	if (stack == NULL || stack->next == NULL)
		return ;
	temp = stack->data;
	while (stack->next)
	{
		stack->data = stack->next->data;
		stack = stack->next;
	}
	stack->data = temp;
}

void	rotate_both(t_node *s1, t_node *s2)
{
	rotate(s1);
	rotate(s2);
}
