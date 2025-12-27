/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meryemseghrouchniidrissi <meryemseghrou    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 09:29:25 by mseghrou          #+#    #+#             */
/*   Updated: 2025/12/27 11:03:18 by meryemseghr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(t_stack **a)
{
	int	i1;
	int	i2;
	int	i3;

	i1 = (*a)->index;
	i2 = (*a)->next->index;
	i3 = (*a)->next->next->index;
	if (i1 < i2 && i2 < i3)
		return ;
	else if (i1 > i2 && i2 < i3 && i1 < i3)
		sa(a);
	else if (i1 > i2 && i2 > i3)
	{
		sa(a);
		rra(a);
	}
	else if (i1 > i2 && i2 < i3 && i1 > i3)
		ra(a);
	else if (i1 < i2 && i2 > i3 && i1 < i3)
	{
		sa(a);
		ra(a);
	}
	else if (i1 < i2 && i2 > i3 && i1 > i3)
		rra(a);
}
