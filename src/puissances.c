#include "..\include\puissance.h"
#include <math.h>

long int puissance(int base, int exposant) {
    return pow(base, exposant);
}

long int racine(int base, int n) {
    return pow( base, 1 / n);
}

float racineCarree(float a){
    if (a<0){
        return -1;
    }
    float epsilon = 0.0000001; // précision
    float pas = 0.000001;     // pas pour approx
    float resultat = 0.0;

    while ((resultat*resultat - a)> epsilon){
        resultat += pas;
    }
    return resultat;
}


/* int puissance(int base, int exposant) {
    int resultat = 1;
    for(int i = 0; i < exposant; i++) {
        resultat = resultat * base;
    }
    return resultat;
} */