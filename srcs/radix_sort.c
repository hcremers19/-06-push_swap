/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:54:53 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/02 11:53:22 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_tab *tabs)
{
	int	chiffre;
	int	tournante;
	int	constant_alen;

	constant_alen = tabs->alen;
	chiffre = 0;
	while (chiffre < 32)
	{
		tournante = 0;
		while (tournante < constant_alen)
		{
			if ((((tabs->a[tabs->alen - 1] >> chiffre) & 1) % 2) == 1)
				pb(tabs);
			else
				ra(tabs);
			tournante++;
		}
		while (tabs->blen)
			pa(tabs);
		chiffre++;
	}
}
