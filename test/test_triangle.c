#include "unity.h"
#include "triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_triangle_sortsideoftriangle(void)
{
  int s1=-1, s2=-1,longside=-1;
  sortsideofTriangle(3, 4 , 5, &s1, &s2, &longside);
  
  printf("longside : %d\n ",longside);
  printf("shortside1 : %d\n ",s1);
  printf("shortside2 : %d\n ",s2);
  
}

void test_triangle_shortside1_add_shortside2_expect_invalid(void)
{
  TEST_ASSERT_EQUAL_STRING("invalid",getTriangleType(11,1,1) );
}
void test_triangle__TriangleType_expect_RightAngle(void)
{
  TEST_ASSERT_EQUAL_STRING("right angle",getTriangleType(3,4,5) );
}
void test_triangle__TriangleType_expect_ObtuseAngle(void)
{
  TEST_ASSERT_EQUAL_STRING("obtuse angle",getTriangleType(7,8,9) );
}
void test_triangle__TriangleType_expect_AccuteAngle(void)
{
  TEST_ASSERT_EQUAL_STRING("accute angle",getTriangleType(2,3,4) );
}