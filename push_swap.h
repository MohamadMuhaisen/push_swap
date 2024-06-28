/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:23:27 by mmuhaise          #+#    #+#             */
/*   Updated: 2024/06/28 21:57:48 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "./ft_printf/ft_printf.h"
# include "./ft_printf/libft/libft.h"

typedef struct t_node {
	int				data;
	struct t_node	*next;
	struct t_node	*prev;
}		t_node;

t_node	*create_node(int data);
void	insert_at_beginning(t_node **head, int data);
void	insert_at_end(t_node **head, int data);
void	print_list(t_node *head);
int		pop(t_node **head);
void	p(t_node **src, t_node **dest);

#endif
