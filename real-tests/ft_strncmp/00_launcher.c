/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 02:08:09 by maemran           #+#    #+#             */
/*   Updated: 2025/07/19 03:40:31 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int ft_strncmp_launcher(void)
{
    t_unit_test *tests;

    tests = NULL;
    load_test(&tests, "test_ft_strncmp_same_str", &test_ft_strncmp_same_str);
    load_test(&tests, "null_char_test", &null_char_test);
    load_test(&tests, "spaces_between_chars_test", &spaces_between_chars_test);
    load_test(&tests, "spaces", &spaces);
    load_test(&tests, "zero_n", &zero_n);
    load_test(&tests, "negative_n", &negative_n);
    load_test(&tests, "null_in_first_str", &null_in_first_str);
    load_test(&tests, "null_chars", &null_chars);
    load_test(&tests, "different_str", &different_str);
    load_test(&tests, "ulcases", &ulcases);
    load_test(&tests, "num_of_letters", &num_of_letters);
    load_test(&tests, "special_chars", &special_chars);
    load_test(&tests, "early_null", &early_null);
    load_test(&tests, "single_str", &single_str);
    load_test(&tests, "taller_than", &taller_than);
    return (launch_tests(&tests, "ft_strncmp: "));
}
