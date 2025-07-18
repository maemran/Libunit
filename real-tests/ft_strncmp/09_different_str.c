/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_different_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:04:27 by maemran           #+#    #+#             */
/*   Updated: 2025/07/18 19:05:13 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"

int different_str(void)
{
    if(ft_strncmp("Hello", "HelLo", 5) == 32)
        return (0);
    else
        return (-1);
}
