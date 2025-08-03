/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_box.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 03:05:12 by maemran           #+#    #+#             */
/*   Updated: 2025/07/19 03:09:09 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_atoi_box(void)
{
	const char	*cyan;
	const char	*reset;

	cyan = "\033[1;36m";
	reset = "\033[0m";
	write(1, "\n\n", 2);
	write(1, cyan, 7);
	ft_putstr_fd("               ╔════════════════╗\n", 1);
	ft_putstr_fd("               ║    FT_ATOI     ║\n", 1);
	ft_putstr_fd("               ╚════════════════╝\n", 1);
	write(1, reset, 4);
	write(1, "\n", 1);
}
