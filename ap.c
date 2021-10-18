/*
Author: David Anderle
Github: https://github.com/Andergonan/
LICENSE: https://github.com/Andergonan/C_language/blob/main/LICENSE
File name: ap.c
Description: Arithmetic sequence
*/

#include <stdio.h>

void generuj(int a1, int d, int n) {
    for(int i = 0; i < n; i++) {
        a1 = a1 + d;
        printf("%d, ", a1);
    }
}
int an(int a1, int d, int n) {
    n = a1 + (n - 1) * d;
    printf("\nn = %d\n", n);
    printf("a1 = %d\n", a1);
    printf("d = %d\n", d);
}
int main() {
    generuj (2,4,16), an(2,4,17);
}