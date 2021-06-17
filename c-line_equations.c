/*
Author: David Anderle
Github: https://github.com/Andergonan/
LICENSE: https://github.com/Andergonan/C_language/blob/main/LICENSE
File name: c-line_equations.c
*/

#include <stdio.h>

int main () {
    
    float x1, y1, x2, y2, x3, y3, m, n;
  
    printf("Zadejte body A[x1, y1]\n");  
        scanf("%f%f", &x1, &y1);  
  
    printf("Zadejte body B[x2, y2]\n");  
        scanf("%f%f", &x2, &y2);  
  
    printf("Zadejte body C[x3, y3]\n");  
        scanf("%f%f", &x3, &y3);  
  
    m = (y2 - y1) / (x2 - x1);  
    n = (y3 - y2) / (x3 - x2);  
  
    if( m == n) {  
        printf("Vsechny 3 body lezi na primce.\n");  
    }  
    else {  
        printf("Vsechny 3 body nelezi na primce.\n");  
    }
return 0;
}