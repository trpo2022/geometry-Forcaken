#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <LibAnother/Another.h>
#include <Libgeom/Geometry.h>
int main()
{
    int N = 50;
    double A[4];
    char str[N];
    char* UKAZAT = str;
    char* UKAZAT2 = str;
    char Circle[] = {"circle"};
    fgets(str, N, stdin);
    if (isalpha(*UKAZAT) != 0) {
        while (isalpha(*UKAZAT2) != 0)
            UKAZAT2++;
    }
    if (correct(Circle, str, N) == true) {
        UKAZAT = UKAZAT2;
        printf("correct\n");
    }
    translation_universal(UKAZAT, A);
    CircleP(A);
    CircleS(A);
    return 0;
}
