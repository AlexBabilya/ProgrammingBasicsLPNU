#include <stdio.h>
#include <stdlib.h>
#include "function.h"

#define SIZE 100

void main()
{
    int a = 0, b = 0, c = 0, sum = 0;
    char str[SIZE];
    printf("Enter a sentence:");
    gets(str);
    if ((strchr(str, ('('))) || (strchr(str, (')'))))
    {
        
        a = 1;
        sum = a + b + c;
    }
    if ((strchr(str, ('['))) || (strchr(str, (']'))))
    {
        const char* res2 = match2(str);
        b = 3;
        sum = a + b + c;
    }
    if ((strchr(str, ('{'))) || (strchr(str, ('}'))))
    {
        const char* res3 = match3(str);
        c = 6;
        sum = a + b + c;
    }
    if (sum == 0) printf("There are no parentheses ");
    else if (sum == 1)
    {
        const char* res1 = match1(str);
        *res1 == '\0' ? printf("Good!\n") : printf("Wrong!\n");
    }
    else  if (sum == 3)
    {
        const char* res2 = match2(str);
        *res2 == '\0' ? printf("Good!\n") : printf("Wrong!\n");
    }
    else  if (sum == 6)
    {
        const char* res3 = match3(str);
        *res3 == '\0' ? printf("Good!\n") : printf("Wrong!\n");
    }
    else if (sum == 4)
    {
        int x =0,y=0,z=0;
        const char* res1 = match1(str);
        const char* res2 = match2(str);
        if (*res1 == '\0')  x = 1;
        if (*res2 == '\0')  y = 1;
        z = x + y;
       
        z == 2 ? printf("Good!\n") : printf("Wrong!\n");
        
    }
    else  if (sum == 7)
    {
        int x = 0, y = 0, z = 0;
        const char* res1 = match1(str);
        const char* res3 = match3(str);
        if (*res1 == '\0')  x = 1;
        if (*res3 == '\0')  y = 1;
        z = x + y;
        z == 2 ? printf("Good!\n") : printf("Wrong!\n");
    }
    else  if (sum == 9)
    {
        int x = 0, y = 0, z = 0;
        const char* res2 = match2(str);
        const char* res3 = match3(str);
        if (*res2 == '\0')  x = 1;
        if (*res3 == '\0')  y = 1;
        z = x + y;
        z == 2 ? printf("Good!\n") : printf("Wrong!\n");
    }
    else  if (sum == 10)
    {
        int x = 0, y = 0, z = 0,c=0;
        const char* res1 = match1(str);
        const char* res2 = match2(str);
        const char* res3 = match3(str);
        if (*res1 == '\0')  c = 1;
        if (*res2 == '\0')  x = 1;
        if (*res3 == '\0')  y = 1;
        z = x + y+c;
        z == 2 ? printf("Good!\n") : printf("Wrong!\n");
    }
}
