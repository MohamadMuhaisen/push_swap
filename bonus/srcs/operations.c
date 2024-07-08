/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:54:45 by mmuhaise          #+#    #+#             */
/*   Updated: 2024/07/08 14:22:26 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	push_stack(t_elem *stack_a, t_elem *stack_b)
{
	int	first;
	int	end;

	first = 0;
	while (stack_a[first].index != -1 && stack_a[first].filled != 1)
		first++;
	end = 0;
	while (stack_b[end].index != -1 && stack_b[end].filled != 1)
		end++;
	end--;
	if (end == -1)
		return ;
	stack_b[end].num = stack_a[first].num;
	stack_a[first].num = 0;
	stack_b[end].filled = 1;
	stack_a[first].filled = 0;
}

void	shift_up(t_elem *stack)
{
	int	start;
	int	end;
	int	tempnum;
	int	tempnum2;
	int	i;

	start = 0;
	while (stack[start].index != -1 && stack[start].filled != 1)
		start++;
	end = 0;
	while (stack[end].index != -1)
		end++;
	end--;
	i = end;
	tempnum = stack[i].num;
	while (i > start)
	{
		tempnum2 = stack[i - 1].num;
		stack[i - 1].num = tempnum;
		tempnum = tempnum2;
		i--;
	}
	stack[end].num = tempnum;
}

void	shift_down(t_elem *stack)
{
	int	start;
	int	end;
	int	tempnum;
	int	tempnum2;
	int	i;

	start = 0;
	while (stack[start].index != -1 && stack[start].filled != 1)
		start++;
	end = 0;
	while (stack[end].index != -1)
		end++;
	end--;
	i = start;
	tempnum = stack[i].num;
	while (i < end)
	{
		tempnum2 = stack[i + 1].num;
		stack[i + 1].num = tempnum;
		tempnum = tempnum2;
		i++;
	}
	stack[start].num = tempnum;
}

void	ft_swap(t_elem *stack)
{
	int	start;
	int	temp;

	start = get_start_stack(stack);
	temp = stack[start].num;
	stack[start].num = stack[start + 1].num;
	stack[start + 1].num = temp;
}
