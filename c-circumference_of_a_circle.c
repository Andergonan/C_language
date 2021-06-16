/*
Author: David Anderle
Github: https://github.com/Andergonan/
LICENSE: https://github.com/Andergonan/C_language/blob/main/LICENSE
File name: c-circumference_of_a_Circle.c
*/

#include <stdio.h>
#include <math.h>
#define DVE_PI 3.142

void main() {
    float radius, circuit;
    
    printf("Zadejte polomer kruhu v mm: ");
        scanf("%f", &radius);
    if (radius <= 0) {
      printf("\n---------------------------\n! Chyba: Neplatna hodnota !\n---------------------------\ntip: Zadejte realne cislo, vetsi jak nula.");
    }
    else {
        circuit = 2 * DVE_PI * pow(radius, 2);
            FILE *fw;
                fw = fopen("obvod_kruhu.txt", "w");
                    fprintf(fw, "Obvod kruhu o polomeru %5.2f mm je %5.2f mm\n", radius, circuit);
        fclose(fw);
        printf("\n------------------------------------------------\n* Vypocet naleznete v souboru: obvod_kruhu.txt *\n------------------------------------------------");
    }
}
