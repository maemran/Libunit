/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_special_chars.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:10:28 by maemran           #+#    #+#             */
/*   Updated: 2025/07/18 19:10:36 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"

int special_chars(void)
{
    if (ft_strncmp("!@#abc", "!@#abd", 6) == -1)
        return (0);
    else
        return (-1);
}
