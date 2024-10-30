#include "../include/any.h"
#include "../include/bits.h"
#include "../include/htoi.h"
#include "../include/lower.h"
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

    s = suite_create("Data Types and Sizes");

    tc_core = tcase_create("Print Ranges");

    tcase_add_test(tc_core, test_Exercise_2_1);
    suite_add_tcase(s, tc_core);

    return s;
}
// =======================================================================

/* Exercise 2-2===========================================================
This is testable, but it is a bit annoying to set this one up in a way that
really does anything helpful, atleast without changing the function a bit .
If you wanted to implement this, you could just change the formal arguments.
So I would add another parameter for a string. And simply check the array to
ensure that it has the corrected string.

ie. lim = 5 , s = char s[lim] , str = "hello there bobby"

with these, s should have the string "hello" as limit is only 5. Then all you
need to do is mirror the format of the test in this file, and add the .c source
file to the make file. But, I would just check with the example I provided in
Exercise_2_02.c
=======================================================================*/

// Exercise 2-3===========================================================
START_TEST(test_Exercise_2_3)
{
    ck_assert_int_eq(htoiModified("96A"), 2410);
    ck_assert_int_eq(htoiModified("0x54"), 84);
    ck_assert_int_eq(htoiModified("0Xdc"), 220);

    // Invalid inputs
    ck_assert_int_eq(htoiModified("G5"), -1);
    ck_assert_int_eq(htoiModified(""), -1);
    ck_assert_int_eq(htoiModified("0x123G"), -1);
    ck_assert_int_eq(htoiModified("   0x54   "), 84);
}

Suite *htoi_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("Type Conversions");
    tc_core = tcase_create("Htoi");

    tcase_add_test(tc_core, test_Exercise_2_3);
    suite_add_tcase(s, tc_core);

    return s;
}
// =======================================================================

// Exercise 2-4 to Exercise 2-5===========================================
START_TEST(test_Exercise_2_4)
{
    char s1[] = {"pillow"};
    char s2[] = {"pie"};
    altSqueeze(s1, s2);
    ck_assert_str_eq(s1, "llow");

    char s3[] = {"nosqueeze"};
    char s4[] = {"  abc  "};
    altSqueeze(s3, s4);
    ck_assert_str_eq(s3, "nosqueeze");
}

START_TEST(test_Exercise_2_5)
{
    char s1[] = {"pillow"};

    ck_assert_int_eq(any(s1, "f"), -1);
    ck_assert_int_eq(any(s1, "w"), 5);
    ck_assert_int_eq(any(s1, " "), -1);
}

Suite *squeeze_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("Increment and Decrement Operators");
    tc_core = tcase_create("StringProcessing");

    tcase_add_test(tc_core, test_Exercise_2_4);
    tcase_add_test(tc_core, test_Exercise_2_5);
    suite_add_tcase(s, tc_core);

    return s;
}
// =======================================================================

// Exercise 2-6 to 2-8====================================================
// TODO: Extend this with more assertions
START_TEST(test_Exercise_2_6)
{
    ck_assert_int_eq(setBits(106, 4, 3, 13), 118);
}
END_TEST

START_TEST(test_Exercise_2_7)
{
    ck_assert_int_eq(invert(255, 4, 3), 227);
}
END_TEST

START_TEST(test_Exercise_2_8)
{
    ck_assert_int_eq(rightRot(109, 2), 1073741851);
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

// Exercise 2-10==========================================================
// TODO: Extend this with more assertions
START_TEST(test_Exercise_2_10)
{
    ck_assert_int_eq('c', lower('C'));
    ck_assert_int_eq('a', lower('a'));
    ck_assert_int_eq(1, lower(1));
}
END_TEST

END_TEST

Suite *lower_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("Conditional Expressions");
    tc_core = tcase_create("Lower");

    tcase_add_test(tc_core, test_Exercise_2_10);
    suite_add_tcase(s, tc_core);

    return s;
}
// =======================================================================

int main(void)
{
    int failures;
    SRunner *sr;

    Suite *suites[] = {ranges_suite(), htoi_suite(), squeeze_suite(), bit_suite(), lower_suite()};
    sr = srunner_create(suites[0]);
    int suitesTotal = sizeof(suites) / sizeof(suites[0]);
    for (int i = 1; i < suitesTotal; ++i)
    {
        srunner_add_suite(sr, suites[i]);
    }

    srunner_run_all(sr, CK_VERBOSE);
    failures = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (failures == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
