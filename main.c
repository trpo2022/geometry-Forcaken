#include <math.h>
#include <stdio.h>

int main()
{
    int F;
    float x, y, r, a, b, c;
    printf("Choose Your figure: \n 1: Circle \n 2: Triangle \n Input "
           "number\n ");
    scanf("%d", &F);
    switch (F) {
    case 1:
        printf("Enter x, y, radius, the shape data according to the sample \n "
               "(circle(0 0, 1.5))\n");
        scanf("%f %f, %f", &x, &y, &r);
        if (r > 0) {
            printf("circle(%f %f, %f)", x, y, r);
        } else {
            printf("Incorrect input\n");
            break;
        case 2:
            printf("Enter a, b, c, your triangle the shape data according to "
                   "the sample \n triangle(3, 4, 5)\n");
            scanf("%f, %f, %f", &a, &b, &c);
            if ((a > 0) && (b > 0) && (c > 0)) {
                if ((a <= b + c) && (b <= c + a) && (c <= a + b)) {
                    printf("triangle(%f %f %f)", a, b, c);
                }
            } else {
                printf("Incorrect input\n");
            }
            break;
        default:
            printf("Error\n");
        }
        return 0;
    }
}
