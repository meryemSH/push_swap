/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseghrou <mseghrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 09:32:21 by mseghrou          #+#    #+#             */
/*   Updated: 2025/12/21 17:24:47 by mseghrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
int	is_duplicate(t_stack *stack, int value)
{
	while (stack)
	{
		if (stack->data == value)
			return (1);
		stack = stack->next;
	}
	return (0);
}
void	error_exit(t_stack **a)
{
	write(2, "Error\n", 6);
	clear_stack(a);
	exit(1);
}

void	verified(int argc, char **argv, t_stack **a)
{
	int		i;
	int		j;
	char	**split;
	long	value;

	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			error_exit(a);
		j = 0;
		while (split[j])
		{
			if (!is_number(split[j]))
				error_exit(a);
			value = ft_atol(split[j]);
			if (value > 2147483647 || value < -2147483648 )
				error_exit(a);
			if (is_duplicate(*a, (int)value))
				error_exit(a);
			add_node_back(a, create_node((int)value));
			j++;
		}
		free_split(split);
		i++;
	}
}
