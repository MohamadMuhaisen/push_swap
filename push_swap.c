/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:29:21 by mmuhaise          #+#    #+#             */
/*   Updated: 2024/06/28 22:00:11 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	insert_at_end(&a, 1);
	insert_at_end(&a, 2);
	insert_at_end(&a, 3);
	insert_at_end(&b, 1);
	insert_at_end(&b, 2);
	insert_at_end(&b, 3);
	printf("Linked List a: \n");
	print_list(a);
	printf("Linked List b: \n");
	print_list(b);
	p(&b, &a);
	printf("pa\n");
	printf("Linked List a: \n");
	print_list(a);
	printf("Linked List b: \n");
	print_list(b);
	return (0);
}
