/*
Author: David Anderle
Github: https://github.com/Andergonan/
LICENSE: https://github.com/Andergonan/C_language/blob/main/LICENSE
File name: c-low_multiplier.c
*/

#include <stdio.h>

int main() {
    int n, i;
    
    printf("Zadejte cele cislo v rozsahu 2 - 10: ");
    scanf("%d", &n);
   
    //kriteria rozsahu (r) && tabulka nasobilky (t)
    if(n == 1) //r
    printf("ERROR !MIMO ROZSAH!");
    if(n > 10)
    printf("ERROR !MIMO ROZSAH!");
    else if(n > 1) { //t
        if(n <= 10)
     for (i = 1; i <= 10; ++i)
      printf("%d * %d = %d \n", n, i, n * i);
    }

    return 0;
}