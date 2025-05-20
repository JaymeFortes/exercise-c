#include<stdio.h>

/*
    Exerc´ıcios
1. Considere o seguinte c´odigo, que exibe o conte´udo do array
junto ao endere¸co de mem´oria de cada elemento:
int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = nums;
    int i, bytes;
    for (i = 0, bytes = 0; i < 10; i++, bytes += 4)
        printf("%d: %p + %d bytes = %p ==> %d\n",
        i, ptr, bytes, (ptr+i), *(ptr+i));
    return 0;
}

Voce consegue alterar o c´odigo, fazendo que ele exiba o
conte´udo de cada byte do array?
    */
int main() {

        int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        unsigned char *ptr = (unsigned char*) nums; // ponteiro para bytes

        int i;
        int totalBytes = sizeof(nums); // total de bytes no array

        for (i = 0; i < totalBytes; i++) {
            printf("Byte %2d: %p ==> %u\n", i, (ptr + i), *(ptr + i));
        }

        return 0;
    }

