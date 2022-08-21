/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <event@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:18:35 by mmatsuo           #+#    #+#             */
/*   Updated: 2022/08/21 18:48:46 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <signal.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

size_t	ft_strlen(char *str);
void	ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
int		ft_atoi(const char *str);

typedef struct s_signal
{
	int		count;
	char	character;
}	t_signal;

#endif
