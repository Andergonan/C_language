/*
Author: David Anderle
Github: https://github.com/Andergonan/
LICENSE: https://github.com/Andergonan/C_language/blob/main/LICENSE
File name: c-dog_age_to_human_age_15-105_method.c
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int dog_age, prehuman_age, human_age;

//Zadani vstupni hodnoty    
    {
        printf("Zadej stari psa: ");
        scanf("%d", &dog_age);
    }
    
//Prepocet na lidske roky dle metody 15-105
    if (dog_age == 1) human_age = 16;
    else if (dog_age == 2) human_age = 24;
    else {
        human_age = 24+("%d", dog_age-2)*4;
    }
    
        {
         printf("Psovi je %d lidskych let.", human_age); //Vystup
        }


    return (EXIT_SUCCESS);
    }