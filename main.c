/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchevall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 15:51:39 by mchevall          #+#    #+#             */
/*   Updated: 2015/12/18 15:55:11 by mchevall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("Please input one and only one argument !!\n");
		return (1);
	}
	read_map(argv[1]);
	ft_putstr("Toto prouve aue tu as tord\n");
	return (0);
}
