/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14_single_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:13:07 by maemran           #+#    #+#             */
/*   Updated: 2025/07/19 01:59:51 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int single_str(void)
{
    if (ft_strncmp("x", "y", 1) == -1)
        return (0);
    else
        return (-1);
}
