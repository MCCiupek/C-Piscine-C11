/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 16:06:06 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/27 00:16:11 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	long	tmp1;
	long	tmp2;

	if (length < 2)
		return (1);
	i = 0;
	tmp1 = f(tab[i], tab[i + 1]);
	tmp2 = 0;
	while (i < length - 1)
	{
		tmp2 = f(tab[i], tab[i + 1]);
		if (tmp1 == 0)
			tmp1 = tmp2;
		if (tmp1 * tmp2 < 0)
			return (0);
		i++;
	}
	return (1);
}
