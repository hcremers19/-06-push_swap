/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:40:56 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/15 18:03:53 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/push_swap.h"

int	main(int argc, char **argv)
{
	t_tab	*tabs;

	tabs = (t_tab *)malloc(sizeof(t_tab));
	if (check_args(argc, argv))
		return (errors(tabs, 0));
	if (init_values(tabs, argc))
		return (errors(tabs, -1));
	if (convert_args(tabs, argv))
		return (errors(tabs, 1));
	if (check_doubles(tabs))
		return (errors(tabs, 1));
	if (argc == 1 || argc == 2)
		;
	else if (argc == 3)
		sort_two(tabs);
	if (check_order(tabs))
		sort_more(tabs, argc);
	free_several(tabs, 3);
	return (0);
}
