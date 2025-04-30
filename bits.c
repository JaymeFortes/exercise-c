#include <stdio.h>

int main() {
  unsigned int var;
  var = 254;
  printf("Decimal: %u\n", var);

  var = 0xFE;
  printf("HexaDecimal: %x\n", var);

  var = 0b11111110;
  printf("Binario: %u\n", var);

  return 0;
}