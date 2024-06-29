/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:23:27 by mmuhaise          #+#    #+#             */
/*   Updated: 2024/06/29 21:18:01 by mmuhaise         ###   ########.fr       */
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
void	push(t_node **src, t_node **dest);
void	swap(t_node *stack);
void	swap_both(t_node *s1, t_node *s2);
void	rotate(t_node *stack);
void	rotate_both(t_node *s1, t_node *s2);
void	reverse_rotate(t_node *stack);
void	reverse_rotate_both(t_node *s1, t_node *s2);
int		is_sorted(t_node *stack);
int		has_duplicates(t_node *stack);
int		stack_len(t_node *stack);
void	free_stacks(t_node *s1, t_node *s2);
t_node	*get_max(t_node *stack);
void	sort_three(t_node **stack);

#endif
