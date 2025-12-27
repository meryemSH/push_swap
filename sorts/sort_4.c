/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meryemseghrouchniidrissi <meryemseghrou    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 15:41:57 by mseghrou          #+#    #+#             */
/*   Updated: 2025/12/27 11:09:16 by meryemseghr      ###   ########.fr       */
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
	pb(a, b);  // push smallest to B
	sort_3(a); // sort remaining 3
	pa(a, b);  // bring back smallest
}
