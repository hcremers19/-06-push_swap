/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:40:56 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/03 13:44:12 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/push_swap.h"

void	init_values(t_tab *tabs, int argc)
{
	tabs->tlen = argc - 1;
	tabs->alen = argc - 1;
	tabs->blen = 0;
	tabs->t = (int *)malloc(sizeof(int) * (tabs->alen));
	tabs->a = (int *)malloc(sizeof(int) * (tabs->alen));
	tabs->b = (int *)malloc(sizeof(int) * (tabs->alen));
	tabs->moves = 0;
}

void	free_all(t_tab *tabs)
{
	free(tabs->t);
	free(tabs->a);
	free(tabs->b);
	free(tabs);
}

int	main(int argc, char **argv)
{
	t_tab	*tabs;
	int		i;

	i = 0;
	tabs = (t_tab *)malloc(sizeof(t_tab));
	init_values(tabs, argc);
	while (i < tabs->tlen)
	{
		tabs->t[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	i = 0;
	while (i < tabs->alen)
	{
		tabs->a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	radix_sort(tabs);
	/*Debug*/
	i = tabs->tlen - 1;
	while (i >= 0)
	{
		printf("tabs->t[%d] = %d\n", i, tabs->t[i]);
		i--;
	}
	i = tabs->alen - 1;
	while (i >= 0)
	{
		printf("tabs->a[%d] = %d\n", i, tabs->a[i]);
		i--;
	}
	i = tabs->blen - 1;
	while (i >= 0)
	{
		printf("tabs->b[%d] = %d\n", i, tabs->b[i]);
		i--;
	}
	printf("Number of moves: %d\n", tabs->moves);
	/*End of debug*/
	free_all(tabs);
	return (0);
}
