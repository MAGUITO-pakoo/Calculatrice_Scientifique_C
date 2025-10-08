#include "puissance.h"
#include <cmath>

long int puissance(int base, int exposant) {
    return pow(base, exposant);
}

long int racine(int base, int n) {
    return pow( base, 1 / n);
}

/* int puissance(int base, int exposant) {
    int resultat = 1;
    for(int i = 0; i < exposant; i++) {
        resultat = resultat * base;
    }
    return resultat;
} */