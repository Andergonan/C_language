/*
Author: David Anderle
Github: https://github.com/Andergonan/
LICENSE: https://github.com/Andergonan/C_language/blob/main/LICENSE
File name: c-exponent.c
*/

#include <stdio.h>

int main () {
    int cislo, exp;
    long long result = 1;
    
    printf("Zadejte cislo: ");
        scanf("%d", &cislo);
    printf("Zadejte mocninu: ");
        scanf("%d", &exp);
    
    while (exp != 0) {
        result *= cislo;
        --exp;
    }
            printf("Vypocet = %lld", result);

return 0;
}