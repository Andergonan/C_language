/*
Author: David Anderle
Github: https://github.com/Andergonan/
LICENSE: https://github.com/Andergonan/C_language/blob/main/LICENSE
File name: c-structure.c
*/

#include <stdio.h>
#include <string.h>
 
    typedef struct phone {
        char mark[10];
        char model[20];
        char cpu[20];
        char ram[20];
    } Phone;
 
    int main() {
        
        Phone phone;
        
        strcpy(phone.mark, "Xiaomi");
        strcpy(phone.model, "Redmi Note 7"); 
        strcpy(phone.cpu, "8 (4x 2.2 GHz)");
        strcpy(phone.ram, "4 GB (1866 MHz)");
        
            printf("Znacka : %s\n", phone.mark);
            printf("Model : %s\n", phone.model);
            printf("CPU : %s\n", phone.cpu);
            printf("RAM : %s\n", phone.ram);

   return 0;
}