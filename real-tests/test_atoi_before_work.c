/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi_before_work.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:25:25 by maemran           #+#    #+#             */
/*   Updated: 2025/07/18 19:15:28 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"

int main(void)
{
    int x;  
    int y;
    
    x = ft_strncmp("short", "shorter", 10);
    y = strncmp("short", "shorter", 10);

    printf("ft_atoi: %d\n", x);
    printf("atoi: %d\n", y);
    return (0);
}
/*
    x = ft_strncmp("42Amman", "", 1);
    y = strncmp("42Amman", "", 1);//

    x = ft_strncmp("42Amman", "42Amman", 5);
    y = strncmp("42Amman", "42Amman", 5);//

    x = ft_strncmp("42 Amman", "42Amman", 5);
    y = strncmp("42 Amman", "42Amman", 5);//
    
    x = ft_strncmp("42Amman", "42 Amman", 5);
    y = strncmp("42Amman", "42 Amman", 5);//
    
    x = ft_strncmp("42Amman", "42Amman", 0);
    y = strncmp("42Amman", "42Amman", 0);//

    
    x = ft_strncmp("42Amman", "42Amman", -1);
    y = strncmp("42Amman", "42Amman", -1);//

    x = ft_strncmp("42Amman", "42Amman", 100);
    y = strncmp("42Amman", "42Amman", 100);//

    x = ft_strncmp("", "42Amman", 100);
    y = strncmp("", "42Amman", 100);//

    x = ft_strncmp("", "", 100);
    y = strncmp("", "", 100);//

    x = ft_strncmp("Hello", "HelLo", 5);
    y = strncmp("Hello", "HelLo", 5);//
    
    x = ft_strncmp("abcDEF", "ABCdef", 6);
    y = strncmp("abcDEF", "ABCdef", 6);//

    x = ft_strncmp("OpenAI", "OpenBI", 4);
    y = strncmp("OpenAI", "OpenBI", 4);

    x = ft_strncmp("testing", "testaaa", 4);
    y = strncmp("testing", "testaaa", 4);//

    x = ft_strncmp("!@#abc", "!@#abd", 6);//
    y = strncmp("!@#abc", "!@#abd", 6);

    x = ft_strncmp("abc\0def", "abcxyz", 7);
    y = strncmp("abc\0def", "abcxyz", 7);

    x = ft_strncmp("x", "y", 1);
    y = strncmp("x", "y", 1);

    x = ft_strncmp("short", "shorter", 10);
    y = strncmp("short", "shorter", 10);
*/