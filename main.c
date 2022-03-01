/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:40:56 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/01 15:30:16 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/push_swap.h"

int	main(int argc, char **argv)
{
	t_tab	*tabs;
	int		i;

	i = 0;
	tabs = (t_tab *)malloc(sizeof(t_tab));
	tabs->alen = argc - 1;
	tabs->blen = 0;
	tabs->a = (int *)malloc(sizeof(int) * (tabs->alen));
	tabs->b = (int *)malloc(sizeof(int) * (tabs->alen));
	while (i < tabs->alen)
	{
		tabs->a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	pb(tabs);
	pb(tabs);
	pb(tabs);
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
	free(tabs->a);
	free(tabs->b);
	free(tabs);
	return (0);
}
