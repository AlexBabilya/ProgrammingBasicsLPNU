#include <stdio.h>
#include <stdlib.h>
#include "function.h"

#define SIZE 100

const char* match1(const char* str)
{
    if (*str == '\0' || *str == ')') { return str; }
    if (*str == '(')
    {
        const char* closer = match1(++str);
        if (*closer == ')')
        {
            return match1(++closer);
        }
        return str - 1;
    }

    return match1(++str);
}
const char* match2(const char* str)
{
    if (*str == '\0' || *str == ']') { return str; }
    if (*str == '[')
    {
        const char* closer = match2(++str);
        if (*closer == ']')
        {
            return match2(++closer);
        }
        return str - 1;
    }

    return match2(++str);
}
const char* match3(const char* str)
{
    if (*str == '\0' || *str == '}') { return str; }
    if (*str == '{')
    {
        const char* closer = match3(++str);
        if (*closer == '}')
        {
            return match3(++closer);
        }
        return str - 1;
    }

    return match3(++str);
}
