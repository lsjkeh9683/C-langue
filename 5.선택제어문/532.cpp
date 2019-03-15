#include<stdio.h>
int main(void){
	float num1,num2;
	printf("두과목 학점을 입력하시오 : ");
	scanf("%f %f", &num1, &num2);
	if(4.0<=num1&&4.0<=num2){
		printf("A");
	}
	else if(3.0<=num1&&3.0<=num2){
		printf("B");
	}
	else{
		printf("C");
	}
	return 0;
}
