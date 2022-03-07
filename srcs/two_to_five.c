/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_to_five.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:05:04 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/07 19:03:42 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_tab *tabs)
{
	if (tabs->a[0] > tabs->a[1])
		sa(tabs);
}

void	sort_three(t_tab *tabs)
{	
	if (tabs->a[0] > tabs->a[1] && tabs->a[0] > tabs->a[2]) 
		ra(tabs);
	else if (tabs->a[1] > tabs->a[0] && tabs->a[1] > tabs->a[2])
		rra(tabs);
	sort_two(tabs);
}

void	sort_four(t_tab *tabs)
{
	int	ref;
	int	i;

	ref = tabs->a[0];
	i = 0;
	while (++i < tabs->alen)
		if (tabs->a[i] < ref)
			ref = tabs->a[i];
	if (tabs->a[2] == ref)
		ra(tabs);
	if (tabs->a[1] == ref)
		ra(tabs);
	if (tabs->a[3] == ref)
		rra(tabs);
	push_b(tabs);
	sort_three(tabs);
	push_a(tabs);
}

void	sort_five(t_tab *tabs)
{
	int ref;
	int i;

	ref = tabs->a[0];
	i = 0;
	while (++i < tabs->alen)
		if (tabs->a[i] < ref)
			ref = tabs->a[i];
	if (tabs->a[2] == ref)
		ra(tabs);
	if (tabs->a[1] == ref)
		ra(tabs);
	if (tabs->a[3] == ref)
		rra(tabs);	
	if (tabs->a[4] == ref)
		rra(tabs);
	push_b(tabs);
	sort_four(tabs);
	push_a(tabs);	
}