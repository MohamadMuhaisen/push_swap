/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:47:02 by mmuhaise          #+#    #+#             */
/*   Updated: 2024/06/29 21:12:38 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_node *stack)
{
	while (stack->next)
	{
		if (stack->data > stack->next->data)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	sort_three(t_node **stack)
{
	t_node	*max;

	max = get_max(*stack);
	if (max == *stack)
		rotate(*stack);
	else if ((*stack)->next == max)
		reverse_rotate(*stack);
	if ((*stack)->data > (*stack)->next->data)
		swap(*stack);
}
