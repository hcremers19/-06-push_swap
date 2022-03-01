/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:54:53 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/01 19:25:15 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_tab *tabs)
{
	int	chiffre;
	int	tournante;

	chiffre = 0;
	while (chiffre < 8)
	{
		tournante = 0;
		ft_putstr_fd("chiffre = ", 1); ft_putnbr_fd(chiffre, 1); ft_putstr_fd("\n", 1);
		while (tournante < tabs->alen)
		{
			ft_putstr_fd("-tournante = ", 1); ft_putnbr_fd(tournante, 1); ft_putstr_fd("\n", 1);
			if (((tabs->a[tabs->alen] >> chiffre) & 1) % 2 == 1)
			{
				pb(tabs);
				ft_putstr_fd("--if\n\n", 1);
			}
			else
			{
				ra(tabs);
				ft_putstr_fd("--else\n\n", 1);
			}
			tournante++;
		}
		while (tabs->blen)
			pa(tabs);
		chiffre++;
		ft_putstr_fd("-----------------\n", 1);
	}
}