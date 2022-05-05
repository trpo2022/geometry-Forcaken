#include "Another.h"
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void translation_universal(char* UKAZAT, double* x1)
{
    char* point;
    double c;
    int i = 0;
    while (isdigit(*UKAZAT) == 0) {
        UKAZAT++;
        if (isdigit(*UKAZAT) != 0) {
            c = strtod(UKAZAT, &point);
            x1[i] = c;
            i++;
            UKAZAT = point;
            if (i == 3)
                break;
        } else {
            break;
        }
    }
} 
