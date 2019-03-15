#include<stdio.h>
int main(void){
	int age;
	printf("나이를 입력하시오 : ");
	scanf("%d", &age);
	if(age>=20){
		printf("adult");
	}
	else{
		printf("%d years later",20-age);
	}
	return 0;
}
