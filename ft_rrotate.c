#include "push_swap.h"

int	*ft_rrotate(int *stk)
{
	int	temp;
	int	i;

	i = 0;
	while (stk[i])
		i++;
	temp = stk[i];
	while (i > 0)
	{
		stk[i] = stk[i - 1];
		i--;
	}
	stk[0] = temp;
	return (stk);
}
