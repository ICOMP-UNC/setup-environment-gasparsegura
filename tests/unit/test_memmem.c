#include "memmem.h"
#include <unity.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_memmem_needle_not_in_haystack(void)
{
    char haystack[] = "Hello, World";
    char needle[] = "foo";
    TEST_ASSERT_NULL(memmem(haystack, sizeof(haystack), needle, sizeof(needle)));
}

void test_memmem_needle_in_haystack(void)
{
    char haystack[] = "Hello, World";
    char needle[] = "World";
    TEST_ASSERT_EQUAL_PTR(haystack + 7, memmem(haystack, sizeof(haystack), needle, sizeof(needle)));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_memmem_needle_not_in_haystack);
    RUN_TEST(test_memmem_needle_in_haystack);
    return UNITY_END();
}
