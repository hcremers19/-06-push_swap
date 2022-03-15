/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_two-six.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:05:04 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/15 17:35:29 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_tab *tabs)
{
	if (tabs->a[0] > tabs->a[1])
		sa(tabs, 1);
}

void	sort_three(t_tab *tabs)
{	
	if (tabs->a[0] > tabs->a[1] && tabs->a[0] > tabs->a[2])
		ra(tabs, 1);
	else if (tabs->a[1] > tabs->a[0] && tabs->a[1] > tabs->a[2])
		rra(tabs, 1);
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
		ra(tabs, 1);
	if (tabs->a[1] == ref)
		ra(tabs, 1);
	if (tabs->a[3] == ref)
		rra(tabs, 1);
	pb(tabs);
	sort_three(tabs);
	pa(tabs);
}

void	sort_five(t_tab *tabs)
{
	int	ref;
	int	i;

	ref = tabs->a[0];
	i = 0;
	while (++i < tabs->alen)
		if (tabs->a[i] < ref)
			ref = tabs->a[i];
	if (tabs->a[2] == ref)
		ra(tabs, 1);
	if (tabs->a[1] == ref)
		ra(tabs, 1);
	if (tabs->a[3] == ref)
		rra(tabs, 1);
	if (tabs->a[4] == ref)
		rra(tabs, 1);
	pb(tabs);
	sort_four(tabs);
	pa(tabs);
}

void	sort_six(t_tab *tabs)
{
	int	ref;
	int	i;

	ref = tabs->a[0];
	i = 0;
	while (++i < tabs->alen)
		if (tabs->a[i] < ref)
			ref = tabs->a[i];
	if (tabs->a[3] == ref)
		ra(tabs, 1);
	if (tabs->a[2] == ref)
		ra(tabs, 1);
	if (tabs->a[1] == ref)
		ra(tabs, 1);
	if (tabs->a[4] == ref)
		rra(tabs, 1);
	if (tabs->a[5] == ref)
		rra(tabs, 1);
	pb(tabs);
	sort_five(tabs);
	pa(tabs);
}
