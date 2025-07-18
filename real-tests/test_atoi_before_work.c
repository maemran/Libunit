/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi_before_work.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:25:25 by maemran           #+#    #+#             */
/*   Updated: 2025/07/18 12:38:34 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/framework.h"

int main(void)
{
    int x;  
    int y;
    
    x = ft_atoi("a1233");
    y = atoi("a1233");
    
    printf("ft_atoi: %d\n", x);
    printf("atoi: %d\n", y);
    return (0);
}
