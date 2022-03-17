/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:34:21 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/17 12:33:52 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	convert_args(t_tab *tabs, char **argv)
{
	int	i;

	tabs->err = 0;
	i = -1;
	while (++i < tabs->tlen)
	{
		tabs->t[i] = ft_atoi(tabs, argv[i + 1]);
		tabs->a[i] = ft_atoi(tabs, argv[i + 1]);
	}
	return (tabs->err);
}

int	errors(t_tab *tabs, int all)
{
	if (all == 1)
		free_several(tabs, 3);
	else if (all == 0)
		free_several(tabs, 0);
	ft_putstr_fd("Error\n", 2);
	return (1);
}

int	free_several(t_tab *tabs, int nbr)
{
	if (nbr == 3)
		free(tabs->b);
	if (nbr >= 2)
		free(tabs->a);
	if (nbr >= 1)
		free(tabs->t);
	if (nbr >= 0)
		free(tabs);
	return (1);
}

int	init_values(t_tab *tabs, int argc)
{
	tabs->tlen = argc - 1;
	tabs->alen = argc - 1;
	tabs->blen = 0;
	tabs->t = (int *)malloc(sizeof(int) * (tabs->alen));
	if (!tabs->t)
		return (free_several(tabs, 1));
	tabs->a = (int *)malloc(sizeof(int) * (tabs->alen));
	if (!tabs->a)
		return (free_several(tabs, 2));
	tabs->b = (int *)malloc(sizeof(int) * (tabs->alen));
	if (!tabs->b)
		return (free_several(tabs, 3));
	return (0);
}

void	sort_more(t_tab *tabs, int argc)
{
	if (argc == 4)
		sort_three(tabs);
	else if (argc == 5)
		sort_four(tabs);
	else if (argc == 6)
		sort_five(tabs);
	else if (argc == 7)
		sort_six(tabs);
	else
		radix_sort(tabs);
}
