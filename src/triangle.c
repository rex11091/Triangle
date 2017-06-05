#include "triangle.h"

void *sortsideofTriangle(int a, int b, int c, int *s1, int *s2, int *longside)
{
  if(a>b&&a>c)
  {
    *longside = a;
    *s1 = b;
    *s2 = c;
  }
  else if (b>a&&b>c)
  {
    *longside = b;
    *s1 = a;
    *s2 = c;
  }
  else if (c>a&&c>b)
  {
    *longside = c;
    *s1 = a;
    *s2 = b;
  }
  else
    return "error";
}

// verify triangle valid or invalid
// * 1 =valid
// * 0 =invalid

char *getTriangleType(int a, int b, int c)
{
  int s1, s2, longside;
  sortsideofTriangle(a, b, c, &s1, &s2, &longside);
  if((s1+s2)>longside)
  {
  if((s1*s1)+(s2*s2)==(longside*longside))
    return "right angle";
  else if((s1*s1)+(s2*s2)<(longside*longside))
    return "accute angle";
  else if ((s1*s1)+(s2*s2)>(longside*longside))
    return "obtuse angle";
  }
  else
  return "invalid";
}

/**char *verifyTriangleType(int a, int b, int c)
{
   if(getTriangleType(a, int b, int c)==)
   {
  if((s1*s1)+(s2*s2)==(longside*longside))
    return "right angle";
  else if((s1*s1)+(s2*s2)<(longside*longside))
    return "accute angle";
  else if ((s1*s1)+(s2*s2)>(longside*longside))
    return "obtuse angle";
}**/
