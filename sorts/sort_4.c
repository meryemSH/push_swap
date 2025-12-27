/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseghrou <mseghrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 15:41:57 by mseghrou          #+#    #+#             */
/*   Updated: 2025/12/27 17:02:51 by mseghrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_position(t_stack *a, int index)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a->index == index)
			return (i);
		a = a->next;
		i++;
	}
	return (-1);
}

void	sort_4(t_stack **a, t_stack **b)
{
	int	pos;

	pos = get_position(*a, 0);
	if (pos == 1)
		ra(a);
	else if (pos == 2)
	{
		rra(a);
		rra(a);
	}
	else if (pos == 3)
		rra(a);
	pb(a, b);
	sort_3(a);
	pa(a, b);
}
