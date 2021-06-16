/*
Author: David Anderle
Github: https://github.com/Andergonan/
LICENSE: https://github.com/Andergonan/C_language/blob/main/LICENSE
Program name: Aritmetiko
File name: c-arithmetic_mean-Aritmetiko
*/

#include <stdio.h>

int main() {
    int cislo_1, cislo_2, cislo_3, sum;
    {
        printf("Zadejte cislice:""\n");
        scanf("%d %d %d", &cislo_1, &cislo_2, &cislo_3);
    }
//Aritmeticky prumer
    sum = (cislo_1 + cislo_2 + cislo_3) /3;
    {
        printf("Aritmeticky prumer = %d ;", sum);
    }
//Číslo s nejvyšší hodnotou
    if (cislo_1 >= cislo_2) {
        if (cislo_1 >= cislo_3)
            printf(" Cislice s nejvyssi hodnotou = %d", cislo_1);
        else
            printf(" Cislice s nejvyssi hodnotou = %d", cislo_3);
    } else {
        if (cislo_2 >= cislo_3)
            printf(" Cislice s nejvyssi hodnotou = %d", cislo_2);
        else
            printf(" Cislice s nejvyssi hodnotou = %d", cislo_3); 
        
    }
    
    return 0;
}