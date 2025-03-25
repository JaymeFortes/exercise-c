#include <stdio.h>
#include <string.h>

int meu_strlen(const char *str) {
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}

int main() {
    char str1[] = "Olá";
    char str2[] = "Ola";
    str2[1] = 'r';  // Modifica "Ola" para "Ora"

    printf("str1=%s\n", str1);
    printf("str2=%s\n", str2);

    // Concatenar
    char str3[100] = "";
    strncat(str3, str1, 1);
    strcat(str3, str2);
    printf("str3=%s\n", str3);

    // Retornar o tamanho
    int len = strlen(str3);
    printf("len: %d\n", len);

    // Copiar
    strncpy(str3, str2, 3);
    str3[3] = '\0';  // Garantir o terminador nulo
    printf("nosso len: %d\n", meu_strlen(str3));

    // Limpar string
    memset(str3, '\0', 100);
    printf("str3=%s\n", str3);

    // Procurar substring
    char str4[] = "Alo mundo";
    char *str5 = strstr(str4, "mun");
    if (str5 == NULL) {
        printf("Não encontrado\n");
    } else {
        printf("Achamos\n");
    }

    // Ler string do usuário
    char str6[100];
	scanf("%s",str6);
    fgets(str6, 100, stdin);
    printf("Você digitou: %s", str6);

    return 0;
}
