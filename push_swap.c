/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseghrou <mseghrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 11:05:35 by mseghrou          #+#    #+#             */
/*   Updated: 2025/12/27 16:33:45 by mseghrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_pos(t_stack *stack, int index)
{
	int	pos;

	pos = 0;
	while (stack)
	{
		if (stack->index == index)
			return (pos);
		stack = stack->next;
		pos++;
	}
	return (-1);
}

void	push_to_b(t_stack **a, t_stack **b, int chunk)
{
	int	i;

	i = 0;
	while (*a)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index <= i + chunk)
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
}

void	push_to_a(t_stack **a, t_stack **b)
{
	int	max;
	int	pos;

	while (*b)
	{
		max = stack_size(*b) - 1;
		pos = get_pos(*b, max);
		if (pos <= stack_size(*b) / 2)
			while ((*b)->index != max)
				rb(b);
		else
			while ((*b)->index != max)
				rrb(b);
		pa(a, b);
	}
}

void	sort_stack(t_stack **a, t_stack **b, int chunk)
{
	int	size;

	if (!a || !*a)
		return ;
	size = stack_size(*a);
	if (size == 1)
		return ;
	else if (size == 2)
		sort_2(a);
	else if (size == 3)
		sort_3(a);
	else if (size == 4)
		sort_4(a, b);
	else if (size == 5)
		sort_5(a, b);
	else
		push_to_b(a, b, chunk);
	if (size > 5)
		push_to_a(a, b);
}
