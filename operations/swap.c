/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meryemseghrouchniidrissi <meryemseghrou    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 09:29:12 by mseghrou          #+#    #+#             */
/*   Updated: 2025/12/27 10:31:57 by meryemseghr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sa(t_stack **a)
{
    int tmp_data;
    int tmp_index;

    if (!a || !*a || !(*a)->next)
        return ;
    tmp_data = (*a)->data;
    tmp_index = (*a)->index;

    (*a)->data = (*a)->next->data;
    (*a)->index = (*a)->next->index;

    (*a)->next->data = tmp_data;
    (*a)->next->index = tmp_index;

    write(1, "sa\n", 3);
}

void sb(t_stack **b)
{
    int tmp_data;
    int tmp_index;

    if (!b || !*b || !(*b)->next)
        return ;
    tmp_data = (*b)->data;
    tmp_index = (*b)->index;

    (*b)->data = (*b)->next->data;
    (*b)->index = (*b)->next->index;

    (*b)->next->data = tmp_data;
    (*b)->next->index = tmp_index;

    write(1, "sb\n", 3);
}

void ss(t_stack **a, t_stack **b)
{
    sa(a);
    sb(b);
    write(1, "ss\n", 3);
}

