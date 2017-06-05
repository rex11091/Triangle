#include "build/temp/_test_triangle.c"
#include "triangle.h"
#include "unity.h"


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

  UnityAssertEqualString((const char*)(("invalid")), (const char*)((getTriangleType(11,1,1))), (

 ((void *)0)

 ), (UNITY_UINT)(25));

}

void test_triangle__TriangleType_expect_RightAngle(void)

{

  UnityAssertEqualString((const char*)(("right angle")), (const char*)((getTriangleType(3,4,5))), (

 ((void *)0)

 ), (UNITY_UINT)(29));

}

void test_triangle__TriangleType_expect_ObtuseAngle(void)

{

  UnityAssertEqualString((const char*)(("obtuse angle")), (const char*)((getTriangleType(7,8,9))), (

 ((void *)0)

 ), (UNITY_UINT)(33));

}

void test_triangle__TriangleType_expect_AccuteAngle(void)

{

  UnityAssertEqualString((const char*)(("accute angle")), (const char*)((getTriangleType(2,3,4))), (

 ((void *)0)

 ), (UNITY_UINT)(37));

}
