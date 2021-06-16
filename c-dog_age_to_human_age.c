/*
Author: David Anderle
Github: https://github.com/Andergonan/
LICENSE: https://github.com/Andergonan/C_language/blob/main/LICENSE
File name: c-dog_age_to_human_age.c
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int dog_age, human_age;
   
   //Vstup
    {
        printf("Zadej stáří psa: ");
        scanf("%d", &dog_age);
    }
    
    human_age = (dog_age *7); //Prepocet na lidské roky
    {
        printf("Psovi je %d lidských let.", human_age); //Vystup
    }
    return (EXIT_SUCCESS);
    }