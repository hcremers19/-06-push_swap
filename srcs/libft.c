/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:10:45 by hcremers          #+#    #+#             */
/*   Updated: 2022/03/15 18:00:53 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

void	ft_putstr_fd(char *str, int fd)
{
	if (str)
		write(fd, str, ft_strlen(str));
}

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	else
		return (0);
}

int	ft_limits(long long n, const char *str, int s)
{
	long long	lim;

	lim = ((n * 10) + (*str - '0')) * s;
	if (lim < -2147483648 || lim > 2147483647)
		return (0);
	return (0);
}

int	ft_atoi(t_tab *tabs, const char *str)
{
	long long	n;
	int			s;
	int			i;

	n = 0;
	s = 1;
	i = 0;
	while (str[i] && ((8 < str[i] && str[i] < 14) || str[i] == ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			s = -1;
	i--;
	while (ft_isdigit(str[++i]))
		n = (n * 10) + (str[i] - 48);
	if ((n * s) < -2147483648 || 2147483647 < (n * s))
	{
		tabs->err = 1;
		return (0);
	}
	return (n * s);
}
