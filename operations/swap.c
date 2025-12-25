/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseghrou <mseghrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 09:29:12 by mseghrou          #+#    #+#             */
/*   Updated: 2025/12/25 09:29:13 by mseghrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

void	sa(t_stack *a)
{
	int	tmp;

	if (!a || !a->next)
		return ;
	tmp = a->data;
	a->data = a->next->data;
	a->next->data = tmp;
	write(1, "sa\n", 3);
}
void	sb(t_stack *b)
{
	int	tmp;

	if (!b || !b->next)
		return ;
	tmp = b->data;
	b->data = b->next->data;
	b->next->data = tmp;
	write(1, "sb\n", 3);
}
void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}
