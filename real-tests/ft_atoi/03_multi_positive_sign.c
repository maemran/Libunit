/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_multi_positive_sign.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:32:37 by maemran           #+#    #+#             */
/*   Updated: 2025/07/19 01:57:28 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	multi_positive_sign_test(void)
{
	if (ft_atoi("++123") == 0)
		return (0);
	else
		return (-1);
}
