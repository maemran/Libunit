/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_spaces_between_chars.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:41:33 by maemran           #+#    #+#             */
/*   Updated: 2025/07/18 18:42:03 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"

int spaces_between_chars_test(void)
{
    if (ft_strncmp("42 Amman", "42Amman", 5) == -33)
        return (0);
    else
        return (-1);
}
