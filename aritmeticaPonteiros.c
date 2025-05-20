
#include <stdio.h>
/*
int main()
{
    int vet[] = {4, 9, 12};
    int i, *ptr;
    ptr = vet;
    for (i = 0; i < 3; i++)
        printf("%d ",
        *ptr++);
    return 1;
}

🔍 O que está acontecendo aqui?

 ptr = vet; → ptr aponta para o início do vetor (vet[0])

No loop, temos *ptr++, que significa:

Dereferência o valor atual de ptr (ou seja, pega *ptr)

Depois incrementa o ponteiro (ptr++), fazendo ele apontar para o próximo elemento do vetor

Porque:

    Iteração 0: *ptr → 4, depois ptr++

    Iteração 1: *ptr → 9, depois ptr++

    Iteração 2: *ptr → 12, depois ptr++
*/

#include <stdio.h>
int main()
{
    int vet[] = {4, 9, 12};
    int i, *ptr;
    ptr = vet;
    for (i = 0; i < 3; i++)
        printf("%d ",
        (*ptr)++);
    return 1;
}
/*
🔍 O que está acontecendo aqui?

ptr = vet; → ptr aponta para vet[0]

No loop, temos (*ptr)++, que significa:

Pega o valor no endereço apontado por ptr (*ptr)

Imprime esse valor

Depois incrementa o valor armazenado nessa posição ((*ptr)++ → pós-incremento)

O ponteiro não se move, ele continua apontando para vet[0]

Iteração 0:

    Imprime 4

    vet[0] vira 5

Iteração 1:

    Ainda ptr aponta para vet[0]

    Imprime 5

    vet[0] vira 6

Iteração 2:

    ptr ainda aponta para vet[0]

    Imprime 6

    vet[0] vira 7
*/

