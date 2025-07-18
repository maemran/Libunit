/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_null_in_first_str.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:55:56 by maemran           #+#    #+#             */
/*   Updated: 2025/07/18 18:56:45 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"

int null_in_first_str(void)
{
    if (ft_strncmp("", "42Amman", 100) == -52)
        return (0);
    else
        return (-1);
}
