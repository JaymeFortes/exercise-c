#include <stdio.h>

unsigned int clear(unsigned int val) {
    return val & 0;
}

unsigned int setBit(unsigned int x, unsigned int bit) {
    //marcar como 1 (ligado), o bit em questão
    unsigned mask = (1 << bit);
    return x | mask;
}

unsigned int clearBit(unsigned int x, unsigned int bit) {
    //zera um unico bit
    unsigned mask = (1 << bit);
    return x & ~mask;
}

//desloca o estado de um determinado bit
unsigned int invertBit(unsigned int x, unsigned int bit) {
    unsigned mask = (1 << bit);
    return x ^ mask;
}

unsigned int testBit(unsigned int x, unsigned int bit) {
    return (x >> bit) & 1;
}

int main() {
    unsigned int X = 0xF0F0;
    unsigned int var;
    var = 254;
    var = 0xFE;
    var = 0b11111110;

    printf("Decimal: %u\n", X);
    printf("Original: %08X\n", X);

    printf("Clear: %0X\n", clear(var));

    printf("Set: %0X\n", setBit(var, var));
    printf("Invert Bit: %0x\n", invertBit(var, var));
    printf("Test Bit: %0x\n", testBit(var, var));


}
