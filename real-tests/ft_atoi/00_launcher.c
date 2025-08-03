/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 01:42:11 by maemran           #+#    #+#             */
/*   Updated: 2025/07/19 14:11:14 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../real_tests.h"

int	ft_atoi_launcher(void)
{
	t_unit_test	*tests;

	tests = NULL;
	load_test(&tests, "null_char", &null_char);
	load_test(&tests, "white_spaces_test", &white_spaces_test);
	load_test(&tests, "multi_positive_sign_test", &multi_positive_sign_test);
	load_test(&tests, "multi_negative_sign_test", &multi_negative_sign_test);
	load_test(&tests, "not_digit_test", &not_digit_test);
	load_test(&tests, "sign_between_nums", &sign_between_nums);
	load_test(&tests, "char_after_num", &char_after_num);
	load_test(&tests, "sign_after_num", &sign_after_num);
	load_test(&tests, "signs", &signs);
	load_test(&tests, "basic_test", &basic_test);
	load_test(&tests, "max_int_test", &max_int_test);
	load_test(&tests, "min_int_test", &min_int_test);
	load_test(&tests, "spaces_before_num_test", &spaces_before_num_test);
	load_test(&tests, "different_signs_test", &different_signs_test);
	load_test(&tests, "overflow_test", &overflow_test);
	return (launch_tests(&tests, "\033[1;36mft_atoi:\033[0m "));
}
