#include "Another.h"
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool finding_bracket(char* UKAZAT)
{
    int flag = 0;
    while (*UKAZAT != 10) {
        if (*UKAZAT == '(') {
            flag = 1;
            break;
        }
        UKAZAT++;
    }
    if (flag == 0) {
        printf("Error at column 7: expected '('");
        return false;
    }
    return true;
}

bool finding_bracket2(char* UKAZAT)
{
    int flag = 0;
    while (*UKAZAT != 10) {
        if (*UKAZAT == ')') {
            flag = 1;
            break;
        }
        UKAZAT++;
    }
    if (flag == 0) {
        printf("Error at column 14: expected ')'");
        return false;
    }
    return true;
}

bool finding_comma(char* UKAZAT)
{
    int flag = 0;
    while (*UKAZAT != 10) {
        if (*UKAZAT == ',') {
            flag = 1;
            break;
        }
        UKAZAT++;
    }
    if (flag == 0) {
        printf("Error expected ','");
        return false;
    }
    return true;
}

bool correct(char* Circle, char* UKAZAT, int N)
{
    int g = 6, check = 0;
    if (strncmp(Circle, UKAZAT, g) == 0) {
        check++;
        if (finding_bracket(UKAZAT) == true)
            check++;
        if (finding_comma(UKAZAT) == true)
            check++;
        if (finding_bracket2(UKAZAT) == true)
            check++;
    } else {
        printf("error: Check the spelling of the command");
    }
    if (check == 4)
        return true;
    if (check != 4)
        return false;
    return true;
}
