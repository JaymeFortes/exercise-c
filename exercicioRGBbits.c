#include <stdio.h>
#include <stdlib.h>

// Máscaras para os componentes RGB
#define MASK_RED   0xFF0000
#define MASK_GREEN 0x00FF00
#define MASK_BLUE  0x0000FF

// Função para imprimir o valor binário de 24 bits
void printBinary(unsigned int value) {
    for (int i = 23; i >= 0; i--) {
        printf("%d", (value >> i) & 1);
        if (i % 8 == 0 && i != 0) printf(" "); // separa por componentes RGB
    }
    printf("\n");
}

// Função para limpar o buffer de entrada
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    unsigned int colour = 0; // Inicializa cor como preto (0x000000)
    int option, newValue;

    while (1) {
        // Mostra o valor atual
        printf("\nCor atual:\n");
        printf("Hexadecimal: 0x%06X\n", colour);
        printf("Binário:     ");
        printBinary(colour);

        // Menu de seleção
        printf("\nEscolha o componente para alterar:\n");
        printf("1 - Vermelho (Red)\n");
        printf("2 - Verde    (Green)\n");
        printf("3 - Azul     (Blue)\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        if (scanf("%d", &option) != 1) {
            printf("Entrada inválida. Encerrando.\n");
            break;
        }

        if (option == 0) break;

        if (option < 1 || option > 3) {
            printf("Opção inválida.\n");
            clearInputBuffer();
            continue;
        }

        printf("Digite o novo valor (0-255): ");
        if (scanf("%d", &newValue) != 1 || newValue < 0 || newValue > 255) {
            printf("Valor inválido.\n");
            clearInputBuffer();
            continue;
        }

        // Atualiza o valor correspondente usando operações bitwise
        switch (option) {
            case 1: // Red
                colour &= ~MASK_RED; // Limpa os bits de red
                colour |= (newValue << 16); // Define os novos bits
                break;
            case 2: // Green
                colour &= ~MASK_GREEN;
                colour |= (newValue << 8);
                break;
            case 3: // Blue
                colour &= ~MASK_BLUE;
                colour |= newValue;
                break;
        }
    }

    printf("Programa encerrado.\n");
    return 0;
}
