#include <stdio.h>

int main() {
    char *text = "Prog. Software Basico";
    int v[] = {0, 1, 2, 3, 4};
    int matriz[4][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11},
        {12, 13, 14, 15}
    };

    // TEXT: já é char*, só imprimir caractere por caractere
    printf("Texto (byte a byte):\n");
    for (char *p = text; *p != '\0'; p++) {
        printf("'%c' (%02x) em %p\n", *p, *p, p);
    }

    // VETOR INT v[]
    printf("\nVetor v[] (byte a byte):\n");
    char *pv = (char*) v;
    for (int i = 0; i < sizeof(v); i++) {
        printf("Byte %2d: %02x em %p\n", i, (unsigned char) pv[i], &pv[i]);
    }

    // MATRIZ int matriz[4][4]
    printf("\nMatriz matriz[4][4] (byte a byte):\n");
    char *pm = (char*) matriz;
    for (int i = 0; i < sizeof(matriz); i++) {
        printf("Byte %2d: %02x em %p\n", i, (unsigned char) pm[i], &pm[i]);
    }

    return 0;
}
