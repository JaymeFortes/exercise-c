#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

void dateFormat1(Date d1, char s[]);

void scanDate(Date *d1);


int main() {
    char msg[80];
    Date d1;
    scanDate(&d1);
    dateFormat1(d1, msg);
    printf("Data Formatada: %s\n", msg);

    return 0;
}

void dateFormat1(Date d1, char s[]) {
    sprintf(s, "%02d/%02d/%04d" , d1.month, d1.year, d1.day);
}

void scanDate(Date *d1) {
    scanf("%d %d %d", &d1->day, &d1->month, &d1->year);
}
