/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseghrou <mseghrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:42:28 by mseghrou          #+#    #+#             */
/*   Updated: 2025/12/25 09:13:56 by mseghrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	get_min_not_indexed(t_stack *stack)
{
	int	min;
	int	found;

	found = 0;
	while (stack)
	{
		if (stack->index == -1)
		{
			if (!found || stack->data < min)
			{
				min = stack->data;
				found = 1;
			}
		}
		stack = stack->next;
		
	}
	return (min);
}

void	assign_index(t_stack *stack)
{
	int		index;
	int		min;
	t_stack	*tmp;

	index = 0;
	while (1)
	{
		tmp = stack;
		min = get_min_not_indexed(tmp);

		while (tmp)
		{
			if (tmp->data == min && tmp->index == -1)
			{
				tmp->index = index;
				index++;
				break ;
			}
			tmp = tmp->next;
		}
		if (!tmp)
			break ;
	}
}
