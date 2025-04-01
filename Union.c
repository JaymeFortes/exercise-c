#include <stdio.h>
#include <string.h>

union data_s {
int i;
float f;
char str[20];
};
int main()
{
union data_s data;
printf("Uso de mem´oria: %ld\n", sizeof(data));
data.i = 1234;
data.f = 643.1234; // o valor de data.i ´e sobrescrito
printf("Valor correto: %f, valor errado: %d\n",
data.f, data.i);
strcpy(data.str, "oi, tudo bem?");
printf("String: %s\n", data.str);
return 0;
}
