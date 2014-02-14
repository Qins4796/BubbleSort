/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_ComapareAndSwap_should_not_swap_if_in_order(void);
extern void test_ComapareAndSwap_should_swap_if_in_order(void);
extern void test_ComapareAndSwap_should_not_swap_if_in_order_for_neg_number(void);
extern void test_ComapareAndSwap_should_not_swap_if_not_in_order_for_neg_number(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_BubbleSort.c";
  UnityBegin();
  RUN_TEST(test_ComapareAndSwap_should_not_swap_if_in_order, 7);
  RUN_TEST(test_ComapareAndSwap_should_swap_if_in_order, 14);
  RUN_TEST(test_ComapareAndSwap_should_not_swap_if_in_order_for_neg_number, 21);
  RUN_TEST(test_ComapareAndSwap_should_not_swap_if_not_in_order_for_neg_number, 27);

  return (UnityEnd());
}
