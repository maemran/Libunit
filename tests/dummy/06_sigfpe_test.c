/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_sigfpe_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:15:44 by rsham             #+#    #+#             */
/*   Updated: 2025/07/19 13:31:02 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"

int	sigfpe_test(void)
{
	volatile int	x;
	volatile int	y;
	int				z;

	x = 1;
	y = 0;
	z = x / y;
	(void)z;
	return (0);
}
