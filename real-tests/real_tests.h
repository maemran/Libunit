/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 01:49:11 by maemran           #+#    #+#             */
/*   Updated: 2025/07/19 02:26:22 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL_TESTS_H
#define REAL_TESTS_H

#include "../framework/libunit.h"

int null_char(void);
int white_spaces_test(void);
int multi_positive_sign_test(void);
int multi_negative_sign_test(void);
int not_digit_test(void);
int    sign_between_nums(void);
int char_after_num(void);
int sign_after_num(void);
int signs(void);
int basic_test(void);
int max_int_test(void);
int min_int_test(void);
int spaces_before_num_test(void);
int different_signs_test(void);
int overflow_test(void);
int test_ft_strncmp_same_str(void);
int null_char_test(void);
int spaces_between_chars_test(void);
int spaces(void);
int zero_n(void);
int negative_n(void);
int null_in_first_str(void);
int null_chars(void);
int different_str(void);
int ulcases(void);
int num_of_letters(void);
int special_chars(void);
int early_null(void);
int single_str(void);
int taller_than(void);
int ft_atoi_launcher(void);
int ft_strncmp_launcher(void);

#endif