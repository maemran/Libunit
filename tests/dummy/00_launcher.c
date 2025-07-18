/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsham <rsham@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:52:58 by rsham             #+#    #+#             */
/*   Updated: 2025/07/18 18:38:41 by rsham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int dummy_launcher(void)
{
    t_unit_test *tests;
    int         result;
    
    tests = NULL;
    load_test(&tests, "OK Test", &ok_test);
    load_test(&tests, "KO Test", &ko_test);
    load_test(&tests, "Segfault Test", &segfault_test);
    load_test(&tests, "Bus Error Test", &buserror_test);
    load_test(&tests, "Abort Test (SIGABRT)", &sigabrt_test);
    load_test(&tests, "Floating Point Exception Test (SIGFPE)", &sigfpe_test);
    load_test(&tests, "Broken Pipe Test (SIGPIPE)", &sigpipe_test);
    load_test(&tests, "Illegal Instruction Test (SIGILL)", &sigill_test);
    result = launch_tests(&tests);
    return (result);
}
