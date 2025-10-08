#include "trigo.h"
#include <math.h>

float sinus(float angle) {
return sin(angle * M_PI / 180);
}

float cosinus(float angle) {
    return cos(angle * M_PI / 180);
}

float tangente(float angle) {
    return tan(angle * M_PI / 180);
}