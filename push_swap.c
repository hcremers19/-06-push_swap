#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;
	int	i;

	(void)b;
	i = 1;
	a = malloc(sizeof(int) + (argc - 1));
	while (i < argc)
	{
		a[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	i = 0;
	a = ft_rrotate(a);
	while (i < (argc - 1))
		printf("%d\n", a[i++]);
	return (0);
}
