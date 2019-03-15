#include<stdio.h>
int main(void){
	char str;
	printf("문자를 입력하시오 : ");
	scanf(" %c", &str);
	int i=1;
	for(i;i<=20;i++){
		printf("%c",str);
	}
	return 0;
}
