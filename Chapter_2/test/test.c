#include "../include/bits.h"
#include "../include/ranges.h"
#include "../include/squeeze.h"

#include <check.h>
#include <stdlib.h>

// Exercise 2-1===========================================================
START_TEST(test_Exercise_2_1)
{
    int signed_char_min, signed_char_max;
    unsigned int unsigned_char_max;
    getCharRanges(&signed_char_min, &signed_char_max, &unsigned_char_max);
    ck_assert_int_eq(signed_char_min, SCHAR_MIN);
    ck_assert_int_eq(signed_char_max, SCHAR_MAX);
    ck_assert_int_eq(unsigned_char_max, UCHAR_MAX);

    int signed_short_min, signed_short_max;
    unsigned int unsigned_short_max;
    getShortRanges(&signed_short_min, &signed_short_max, &unsigned_short_max);
    ck_assert_int_eq(signed_short_min, SHRT_MIN);
    ck_assert_int_eq(signed_short_max, SHRT_MAX);
    ck_assert_int_eq(unsigned_short_max, USHRT_MAX);

    int signed_int_min, signed_int_max;
    unsigned int unsigned_int_max;
    getIntRanges(&signed_int_min, &signed_int_max, &unsigned_int_max);
    ck_assert_int_eq(signed_int_min, INT_MIN);
    ck_assert_int_eq(signed_int_max, INT_MAX);
    ck_assert_int_eq(unsigned_int_max, UINT_MAX);

    long int signed_long_min, signed_long_max;
    unsigned long int unsigned_long_max;
    getLongRanges(&signed_long_min, &signed_long_max, &unsigned_long_max);
    ck_assert_int_eq(signed_long_min, LONG_MIN);
    ck_assert_int_eq(signed_long_max, LONG_MAX);
    ck_assert_int_eq(unsigned_long_max, ULONG_MAX);
}

Suite *ranges_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("Print Ranges for Given Data Types");

    tc_core = tcase_create("PRanges");

    tcase_add_test(tc_core, test_Exercise_2_1);
    suite_add_tcase(s, tc_core);

    return s;
}
// =======================================================================

// Exercise 2-4===========================================================
START_TEST(test_Exercise_2_4)
{
    char s1[] = {"pillow"};
    char s2[] = {"pie"};
    squeeze2(s1, s2);
    ck_assert_str_eq(s1, "llow");
}

Suite *squeeze_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("Increment and Decrement Operators");
    tc_core = tcase_create("Inc/Dec");

    tcase_add_test(tc_core, test_Exercise_2_4);
    suite_add_tcase(s, tc_core);

    return s;
}
// =======================================================================

// Exercise 2-6 to 2-8====================================================
// TODO: Extend this with more assertions
START_TEST(test_Exercise_2_6)
{
    ck_assert_int_eq(setbits(106, 4, 3, 13), 118);
}
END_TEST

START_TEST(test_Exercise_2_7)
{
    ck_assert_int_eq(invert(255, 4, 3), 227);
}
END_TEST

START_TEST(test_Exercise_2_8)
{
    ck_assert_int_eq(rightrot(109, 2), 1073741851);
}
END_TEST

Suite *bit_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("Bitwise Operators");
    tc_core = tcase_create("Bitwise");

    tcase_add_test(tc_core, test_Exercise_2_6);
    tcase_add_test(tc_core, test_Exercise_2_7);
    tcase_add_test(tc_core, test_Exercise_2_8);
    suite_add_tcase(s, tc_core);

    return s;
}
// =======================================================================

int main(void)
{
    int number_failed;
    Suite *s1, *s2, *s3;
    SRunner *sr;

    s1 = ranges_suite();
    s2 = squeeze_suite();
    s3 = bit_suite();

    sr = srunner_create(s1);
    srunner_add_suite(sr, s2);
    srunner_add_suite(sr, s3);

    srunner_run_all(sr, CK_VERBOSE);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
} // clang -o test test.c -lcheck
