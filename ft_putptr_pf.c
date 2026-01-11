/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htamayo- <htamayo-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:22:52 by htamayo-          #+#    #+#             */
/*   Updated: 2026/01/11 16:02:07 by htamayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_pf(void *ptr, size_t *counter)
{
	char			*str;
	unsigned long	ptr_address;

	ptr_address = (unsigned long)ptr;
	if(ptr_address == 0)
	{
		ft_putstr_pf("(nil)", counter);
		return ;
	}
	ft_putstr_pf("0x", counter);
	str = ft_aux_pf(ptr_address, HEX_LOW_BASE);
	ft_putstr_pf(str, counter);
	free(str);
}
