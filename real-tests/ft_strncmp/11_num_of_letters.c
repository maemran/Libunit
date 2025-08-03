/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_num_of_letters.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:08:35 by maemran           #+#    #+#             */
/*   Updated: 2025/07/19 01:59:41 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	num_of_letters(void)
{
	if (ft_strncmp("testing", "testaaa", 4) == 0)
		return (0);
	else
		return (-1);
}
