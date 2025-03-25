#include<stdio.h>
#include<string.h>

int main(){
	char str1[] = "Olá";
	char str2[] = {'O', 'l', 'a'};
	str1[1] = 'r';
	
	printf("str1=%s\n", str1);
	printf("str2=%s\n", str2);
	return 0;
}