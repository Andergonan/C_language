/*
Author: David Anderle
Github: https://github.com/Andergonan/
LICENSE: https://github.com/Andergonan/C_language/blob/main/LICENSE
File name: c-files.c
*/

#include <stdio.h>

int main () {
    int hodnota;

    printf("Zadejte kladne ci zaporne realne cislo: ");
        scanf("%d", &hodnota);
    FILE *fw;
        fw = fopen("c-files.txt", "w");
            fprintf(fw, "Vami zadane cislo: %d", hodnota);
fclose(fw);

return 0;
}
