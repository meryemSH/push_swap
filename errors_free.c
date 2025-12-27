/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseghrou <mseghrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 16:19:08 by mseghrou          #+#    #+#             */
/*   Updated: 2025/12/27 17:01:03 by mseghrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(t_stack **a)
{
	write(2, "Error\n", 6);
	clear_stack(a);
	exit(1);
}

void	error_exit_split(t_stack **a, char **split)
{
	write(2, "Error\n", 6);
	if (split)
		free_split(split);
	clear_stack(a);
	exit(1);
}
