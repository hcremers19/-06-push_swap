/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:40:56 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/03 16:51:11 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/push_swap.h"

void	free_all(t_tab *tabs)
{
	free(tabs->t);
	free(tabs->a);
	free(tabs->b);
	free(tabs);
}

void convert_args(t_tab *tabs, char **argv)				// À optimiser
{
	int	i;

	i = -1;
	while (++i < tabs->tlen)
		tabs->t[i] = ft_atoi(argv[i + 1]);
	i = -1;
	while (++i < tabs->alen)
		tabs->a[i] = ft_atoi(argv[i + 1]);
}

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

int	main(int argc, char **argv)
{
	t_tab	*tabs;

	tabs = (t_tab *)malloc(sizeof(t_tab));
	init_values(tabs, argc);
	convert_args(tabs, argv);
	radix_sort(tabs);
	debug(tabs);										// À supprimer
	free_all(tabs);
	return (0);
}

void debug(t_tab *tabs)									// À supprimer
{
	int	i;
	
	i = tabs->tlen;
	while (--i >= 0)
		printf("tabs->t[%d] = %d\n", i, tabs->t[i]);
	i = tabs->alen;
	while (--i >= 0)
		printf("tabs->a[%d] = %d\n", i, tabs->a[i]);
	i = tabs->blen;
	while (--i >= 0)
		printf("tabs->b[%d] = %d\n", i, tabs->b[i]);
	printf("Number of moves: %d\n", tabs->moves);
}
