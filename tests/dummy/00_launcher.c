/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:52:58 by rsham             #+#    #+#             */
/*   Updated: 2025/07/19 02:32:08 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int dummy_launcher(void)
{
    t_unit_test *tests;
    
    tests = NULL;
    load_test(&tests, "OK Test", &ok_test);
    load_test(&tests, "KO Test", &ko_test);
    load_test(&tests, "Segfault Test", &segfault_test);
    load_test(&tests, "Bus Error Test", &buserror_test);
    load_test(&tests, "Abort Test (SIGABRT)", &sigabrt_test);
    load_test(&tests, "Floating Point Exception Test (SIGFPE)", &sigfpe_test);
    load_test(&tests, "Broken Pipe Test (SIGPIPE)", &sigpipe_test);
    load_test(&tests, "Illegal Instruction Test (SIGILL)", &sigill_test);
    return (launch_tests(&tests, NULL));
}
