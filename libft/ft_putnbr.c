/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:20:02 by aleveque          #+#    #+#             */
/*   Updated: 2016/12/02 13:12:18 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nbr)
{
	long n;

	n = nbr;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
	if (n < 10)
		ft_putchar(n + 48);
}
