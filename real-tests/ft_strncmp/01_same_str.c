/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_same_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:34:03 by maemran           #+#    #+#             */
/*   Updated: 2025/07/19 03:29:13 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	test_ft_strncmp_same_str(void)
{
	if (ft_strncmp("42Amman", "42Amman", 9) == 0)
		return (0);
	else
		return (-1);
}
