/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:57:23 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/15 17:41:49 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_order(t_tab *tabs)
{
	int	i;

	i = 0;
	while (i < tabs->alen - 1)
	{
		if (tabs->a[i] < tabs->a[i + 1])
			i++;
		else
			return (1);
	}
	return (0);
}

int	check_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (j == 0 && (argv[i][j] == '-' || argv[i][j] == '+'))
				j++;
			if (!ft_isdigit(argv[i][j]))
				return (1);
			else
				j++;
		}
		i++;
	}
	return (0);
}

int	check_doubles(t_tab *tabs)
{
	int	i;
	int	j;

	i = 0;
	while (i < tabs->alen - 1)
	{
		j = i + 1;
		while (j < tabs->alen)
		{
			if (tabs->a[i] == tabs->a[j])
				return (1);
			else
				j++;
		}
		i++;
	}
	return (0);
}
