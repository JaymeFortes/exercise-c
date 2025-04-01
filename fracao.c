#include <stdio.h>

struct fracao_s {
    float numerador;
    float denominador;
};
float calcula(struct fracao_s frac)
{
    return frac.numerador / frac.denominador;
}
int main()
{
    struct fracao_s f1;
    f1.numerador = 10.5;
    f1.denominador = 2.75;
    printf("Valor: %f\n", calcula(f1));
}