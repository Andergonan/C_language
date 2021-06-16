/*
Author: David Anderle
Github: https://github.com/Andergonan/
LICENSE: https://github.com/Andergonan/C_language/blob/main/LICENSE
File name: c-absolute_value.c
*/

#include <stdio.h>
#include <stdlib.h>

double load() {
    double h;

    printf("Zadejte hodnotu: ");
        scanf("%lf", &h);
            return h;
}

void absolutni_h(double h) {
    if (h >= 0);
        else (h *= -1);
            printf("Absolutni hodnota je %lf", h);
}

int main() {
    char restart = 'a';
    double h;
    
    while(restart != 'n') 
    {
        h = load();
        absolutni_h(h);
            printf("\nChcete znovu vypocitat absolutni hodnotu?\n\nAno - [a]\nNe - [n]\n>");
                do{
                    restart = (char) getchar();
                        } while(restart == '\n');
                            printf("\nProgram ukoncen.\n");
    }

    return (EXIT_SUCCESS);
}