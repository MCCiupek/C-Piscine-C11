/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 18:21:20 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/26 23:34:58 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (!ft_strcmp(av[2], "+"))
		ft_putnbr(ft_atoi(av[1]) + ft_atoi(av[3]));
	else if (!ft_strcmp(av[2], "-"))
		ft_putnbr(ft_atoi(av[1]) - ft_atoi(av[3]));
	else if (!ft_strcmp(av[2], "*"))
		ft_putnbr(ft_atoi(av[1]) * ft_atoi(av[3]));
	else if (!ft_strcmp(av[2], "/"))
		if (!ft_atoi(av[3]))
			ft_putstr("Stop : division by zero\n");
		else
			ft_putnbr(ft_atoi(av[1]) / ft_atoi(av[3]));
	else if (!ft_strcmp(av[2], "%"))
		if (!ft_atoi(av[3]))
			ft_putstr("Stop : modulo by zero\n");
		else
			ft_putnbr(ft_atoi(av[1]) % ft_atoi(av[3]));
	else
		ft_putstr("0\n");
	return (1);
}
