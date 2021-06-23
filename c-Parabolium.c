/*
Author: David Anderle
Github: https://github.com/Andergonan/
LICENSE: https://github.com/Andergonan/C_language/blob/main/LICENSE
Program name: Parabolium
File name: c-Parabolium.c
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    double a;
    double b;
    double c;
    float v[2];
    
    printf("---Parabolium---\n\n");
    printf("Hodnota a = ");
        scanf("%lf", &a);
    printf("\nHodnota b = ");
        scanf("%lf", &b);
    printf("\nHodnota c = ");
        scanf("%lf", &c);
    

    if (a < 0.000001) {
        printf("Nejedna se o kvadratickou rovnici!");
    return 0;
    }

    v[0] = -b / ( 2 * a);
    v[1] = c- (b * b) / (4 * a);

    printf("%lf\n", v[0]);
    printf("%lf\n", v[1]);

return 0;
}