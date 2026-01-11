/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htamayo- <htamayo-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 18:42:38 by htamayo-          #+#    #+#             */
/*   Updated: 2025/12/20 18:44:47 by htamayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_pf(unsigned int num, size_t *counter, char *base)
{
	char	*str;

	str = ft_aux_pf(num, base);
	ft_putstr_pf(str, counter);
	free(str);
}
