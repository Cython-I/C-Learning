#include "../include/bits.h"
#include "../include/squeeze.h"

#include <check.h>
#include <stdlib.h>

// =======================================================================
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

// =======================================================================
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
    Suite *s1, *s2;
    SRunner *sr;

    s1 = squeeze_suite();
    s2 = bit_suite();

    sr = srunner_create(s1);
    srunner_add_suite(sr, s2);

    srunner_run_all(sr, CK_VERBOSE);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
} // clang -o test test.c -lcheck
