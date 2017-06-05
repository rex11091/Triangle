#ifndef _TRIANGLE_H
#define _TRIANGLE_H




void *sortsideofTriangle(int a, int b, int c,
                      int *s1, int *s2 ,int *longside);
                      
                      
                     
char *getTriangleType(int a, int b, int c);

char *verifyTriangleType(int a, int b, int c);

#endif // _TRIANGLE_H
