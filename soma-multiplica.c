#include <stdio.h>

struct fracao_s {
    float numerador;
    float denominador;
};

float soma(struct fracao_s frac)
{
    return frac.numerador + frac.denominador;
}

float multiplica(struct fracao_s frac) {
      return frac.numerador * frac.denominador;
}

int main()
{
    struct fracao_s f1;
    f1.numerador = 10.5;
    f1.denominador = 2.75;
    printf("Valor: %f\n", soma(f1));
    printf("Valor: %f\n", multiplica(f1));
}



//
// Created by jayme on 01/04/2025.
//
