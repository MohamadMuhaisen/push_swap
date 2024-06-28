/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:29:59 by mmuhaise          #+#    #+#             */
/*   Updated: 2024/06/28 22:20:47 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	p(t_node **src, t_node **dest)
{
	int	temp;

	if (src == NULL)
		return ;
	temp = pop(src);
	insert_at_beginning(dest, temp);
}
