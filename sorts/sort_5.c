/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meryemseghrouchniidrissi <meryemseghrou    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 11:38:17 by mseghrou          #+#    #+#             */
/*   Updated: 2025/12/27 14:48:51 by meryemseghr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sort_5(t_stack **a, t_stack **b)
{
    int pos;


    pos = get_position(*a, 0);
    if (pos == 1)
        ra(a);
    else if (pos == 2)
    {
        ra(a);
        ra(a);
    }
    else if (pos == 3)
    {
        rra(a);
        rra(a);
    }
    else if (pos == 4)
        rra(a);
    pb(a, b);
    pos = get_position(*a, 1);
    if (pos == 1)
        ra(a);
    else if (pos == 2)
    {
        ra(a);
        ra(a);
    }
    else if (pos == 3)
        rra(a);
    pb(a, b);
    sort_3(a);
    pa(a, b);
    pa(a, b);
}
