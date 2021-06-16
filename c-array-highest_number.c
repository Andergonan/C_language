/*
Author: David Anderle
Github: https://github.com/Andergonan/
LICENSE: https://github.com/Andergonan/C_language/blob/main/LICENSE
File name: c-array-highest_number.c
*/

#include <stdio.h>

int main() {
    int c, n;
    float arr[100];
    printf("Kolik cisel chcete vlozit? : ");
    scanf("%d", &n);

    for (c = 0; c < n; ++c) {
        printf("Vlozte cislo %d. : ", c + 1);
        scanf("%f", &arr[c]);
    }

    // ukladani nejvyssiho poctu do arr[0]
    for (c = 1; c < n; ++c) {
        if (arr[0] < arr[c])
            arr[0] = arr[c];
    }

    printf("Nejvetsi cislo = %.2f", arr[0]);

    return 0;
}