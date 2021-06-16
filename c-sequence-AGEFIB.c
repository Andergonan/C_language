/* 
Author: David Anderle
Github: https://github.com/Andergonan/
LICENSE: https://github.com/Andergonan/C_language/blob/main/LICENSE
Program name: AGEFIB
File name: c-sequence-AGEFIB.c
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    
    int choice; // k main menu
    int p, d, i, r, a[9]; // k Aritmeticke p. ("i" take ke Geometricke)
    int first, ratio, terms, value, sum=0; // ke Geometricke p.
    int t1 = 0, t2 = 1, nextTerm = 0, n; // k Fibonacciho p.
    unsigned long int fact;

    // main menu
    while (1) {
        printf("\n\n**********************\n> AGEFIB - Main menu <\n**********************");

        printf("\n- Aritmeticka posloupnost [1]\n");
        printf("- Geometricka posloupnost [2]\n");
        printf("- Fibonacciho posloupnost [3]\n");
        printf("- EXIT [4]\n\n\n");
 
        printf("Zvolte posloupnost zadanim ciselne hodnoty: ");
        scanf("%d", &choice);
    
        switch (choice) {
            
            // Aritmeticka posloupnost
            case 1:
                printf("----------------------------------------------");
                printf("\n- Aritmeticka posloupnost\n");
                printf("\nZadejte hodnotu prvku: \na[0] = ");
                scanf("%d", &p);
        
                printf("Zadejte prirustek: ");
                scanf("%d", &d);
        
                for(i = 1; i < 10; i++) {
                p += r + d; {
                printf("a[%d] = %d\n", i, p);
                    }
                }
                printf("\n----------------------------------------------");
            break;

            // Geometricka posloupnost
            case 2:
                printf("----------------------------------------------");
                printf("\n- Geometricka posloupnost\n");
                printf("\nZadejte pocet terminu\n");
                scanf("%d", &terms);
 
                printf("Zadejte prvni termin a bezny pomer\n");
                scanf("%d %d", &first, &ratio);
 
                value = first;
                printf("GP SERIE\n");
                for(i = 0; i < terms; i++) {
                printf("%d ", value);
                sum += value;
                value = value * ratio;
                }
 
                printf("\nSoucet GP serie s %d t. je %d\n", terms, sum);
                printf("\n----------------------------------------------");
            break;
            
            // Fibonacciho posloupnost
            case 3:
                printf("----------------------------------------------");
                printf("\n- Fibonacciho posloupnost\n");
                printf("\nZadejte kladne cislo: ");
                scanf("%d", &n);

                // zobrazí první dva výrazy, které jsou vždy 0 a 1
                printf("Fibonacciho posloupnots: %d, %d, ", t1, t2);
                nextTerm = t1 + t2;

                while (nextTerm <= n) {
                printf("%d, ", nextTerm);
                t1 = t2;
                t2 = nextTerm;
                nextTerm = t1 + t2;
                }
                printf("\n----------------------------------------------");
            break;
            
            case 4:
            printf("----------------------------------------------");
            printf("\nBYE!");
            exit(0);

        }
    }    
return 0;
}