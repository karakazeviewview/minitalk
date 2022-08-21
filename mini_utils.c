/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <event@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:25:59 by mmatsuo           #+#    #+#             */
/*   Updated: 2022/08/21 18:47:52 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr_fd(char *str, int fd)
{
	 write(fd, str, ft_strlen(str));
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	i;

	i = n;
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		i = i * -1;
	}
	if (i >= 9)
		ft_putnbr_fd(i / 10, fd);
	ft_putchar_fd((i % 10) + '0', fd);
}

int	ft_atoi(const char *str)
{
	size_t		i;
	long long	re_nb;
	int			sign;

	i = 0;
	re_nb = 0;
	sign = 1;
	while ((str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
					str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (('0' <= str[i] && str[i] <= '9'))
	{
		re_nb = (re_nb * 10) + (str[i] - '0');
		i++;
	}
	return (re_nb * sign);
}
