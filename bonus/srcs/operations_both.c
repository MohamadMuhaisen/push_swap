/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_both.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:54:45 by mmuhaise          #+#    #+#             */
/*   Updated: 2024/07/08 14:22:23 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_swap_both(t_elem *stack_a, t_elem *stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
}

void	ft_double_shift(t_elem *stack_a, t_elem *stack_b, int down_up)
{
	if (down_up == 1)
	{
		shift_down(stack_a);
		shift_down(stack_b);
	}
	else
	{
		shift_up(stack_a);
		shift_up(stack_b);
	}
}
