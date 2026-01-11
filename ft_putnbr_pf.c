/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htamayo- <htamayo-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 19:05:43 by htamayo-          #+#    #+#             */
/*   Updated: 2025/12/20 19:19:18 by htamayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int num, size_t *counter)
{
	if (num == -2147483648)
		ft_putstr_pf("-2147483648", counter);
	else if (num < 0)
	{
		num = num * -1;
		ft_putchar_pf('-', counter);
		ft_putnbr_pf(num, counter);
	}
	else
	{
		if (num > 9)
		{
			ft_putnbr_pf(num / 10, counter);
			num %= 10;
		}
		if (num >= 0 && num <= 9)
		{
			num += '0';
			ft_putchar_pf(num, counter);
		}
	}
}
