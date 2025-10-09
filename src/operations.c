#include <stdio.h>
#include <math.h>
#include "..\include\operations.h"

int somme(int x, int y) {
    return x + y;
}

float soustraction(float a, float b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a*b;
}

int division(int a, int b) {
    if(b == 0){
        printf("division paar zéro(0) impossible\n");
        return 0;
    }
    return a / b;
}

unsigned long factoreil(unsigned int a)
{
    if(a > 1)
    {
        return a * factoreil(a - 1);     
    }else{
        return 1;
    }
}

unsigned int pgcd(int a, int b){
    a = abs(a);
    b = abs(b);
    // Algorithme d'Euclide
    while(b != 0){
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
}

unsigned int ppcm(int a, int b){
    if(a == 0 || b == 0){
        return 0;
    }
    return abs(a * b) / pgcd(a, b);
}


