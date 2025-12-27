/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseghrou <mseghrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:42:28 by mseghrou          #+#    #+#             */
/*   Updated: 2025/12/27 17:04:23 by mseghrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_min(t_stack *stack)
{
	t_stack	*min;

	min = NULL;
	while (stack)
	{
		if (stack->index == -1)
		{
			if (!min || stack->data < min->data)
				min = stack;
		}
		stack = stack->next;
	}
	return (min);
}

void	assign_index(t_stack *stack)
{
	int		i;
	t_stack	*min;

	i = 0;
	while (1)
	{
		min = get_min(stack);
		if (!min)
			break ;
		min->index = i;
		i++;
	}
}
