#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	a[argc - 1];
//	int	b[argc - 1];
	int	i;

	i = argc - 1;
	while (i)
	{
		a[i] = ft_atoi(argv[i]);
		i--;
	}
	i = argc - 1;
	while (i)
		printf("%d\n", a[i--]);
	return (0);
}
