/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseghrou <mseghrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 09:32:21 by mseghrou          #+#    #+#             */
/*   Updated: 2025/12/27 16:41:37 by mseghrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *s)
{
	int	i;

	if (!s || !*s)
		return (0);
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

void	add_to_stack(t_stack **a, char *num_str, char **split)
{
	long	value;
	t_stack	*node;

	if (!is_number(num_str))
		error_exit_split(a, split);
	value = ft_atol(num_str);
	if (value > 2147483647 || value < -2147483648)
		error_exit_split(a, split);
	if (is_duplicate(*a, (int)value))
		error_exit_split(a, split);
	node = create_node((int)value);
	if (!node)
		error_exit_split(a, split);
	add_node_back(a, node);
}

void	verified(int argc, char **argv, t_stack **a)
{
	int		i;
	int		j;
	char	**split;

	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			error_exit(a);
		j = 0;
		while (split[j])
		{
			if (!split[j][0])
				error_exit_split(a, split);
			add_to_stack(a, split[j], split);
			j++;
		}
		free_split(split);
		i++;
	}
	if (!*a)
		error_exit(a);
}
