/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseghrou <mseghrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 16:01:32 by mseghrou          #+#    #+#             */
/*   Updated: 2025/12/27 17:03:08 by mseghrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *a)
{
	while (a && a->next)
	{
		if (a->data > a->next->data)
			return (0);
		a = a->next;
	}
	return (1);
}

static void	sort_by_size(t_stack **a, t_stack **b, int size)
{
	int	chunk_size;

	if (size == 2)
		sort_2(a);
	else if (size == 3)
		sort_3(a);
	else if (size == 4)
		sort_4(a, b);
	else if (size == 5)
		sort_5(a, b);
	else
	{
		if (size <= 100)
			chunk_size = 15;
		else
			chunk_size = 30;
		sort_stack(a, b, chunk_size);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		size;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	verified(argc, argv, &a);
	assign_index(a);
	size = stack_size(a);
	if (is_sorted(a))
	{
		clear_stack(&a);
		return (0);
	}
	sort_by_size(&a, &b, size);
	clear_stack(&a);
	return (0);
}
