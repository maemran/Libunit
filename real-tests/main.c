/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 01:28:58 by maemran           #+#    #+#             */
/*   Updated: 2025/07/19 14:01:47 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	main(void)
{
	ft_atoi_box();
	if (ft_atoi_launcher() == -2)
		return (1);
	ft_strncmp_box();
	if (ft_strncmp_launcher() == -2)
		return (1);
	return (0);
}
