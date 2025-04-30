#include <stdio.h>

typedef struct {
    float numerador;
    float denominador;
}Fracao;

float calcula(const Fracao frac);
float calculaRef(const Fracao *frac);

Fracao soma(const Fracao* a, const Fracao* b);
Fracao multiplica(const Fracao *a, const Fracao *b);

float calcula(const Fracao frac) {
    return frac.numerador / frac.denominador;


float calculaRef(const Fracao *frac) {
    return frac -> numerador / frac -> denominador;
}

int main() {
    Fracao f1;
    f1.numerador = 10;
    f1.denominador = 2;

    printf("Valor calcula: %f\n", calcula(f1));
    printf("Valor calcula por referencia: %f\n", calculaRef(&f1));
}