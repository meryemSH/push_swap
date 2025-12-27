#include "push_swap.h"
int	main(int argc, char **argv)
{
	t_stack	*a = NULL;
	t_stack	*b = NULL;
	int		size;
	int		chunk;

	if (argc < 2)
		return (0);
	verified(argc, argv, &a);
	assign_index(a);
	size = stack_size(a);
	if (size == 2)
		sort_2(&a);
	else if (size == 3)
		sort_3(&a);
	else if (size == 4)
		sort_4(&a, &b);
	else if (size == 5)
		sort_5(&a, &b);
	else
	{
		chunk = (size <= 100) ? 15 : 30;
		sort_stack(&a, &b, chunk);
	}
	clear_stack(&a);
	return (0);
}

