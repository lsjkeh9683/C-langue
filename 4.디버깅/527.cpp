#include<stdio.h>
int main (void){
	int num1,num2;
	printf("정수  2개를 입력하시오 : ");
	scanf("%d %d", &num1, &num2);
	printf("%d ",num1/num2);
	printf("%.2f",(float)num1/num2);
	return 0;
} 
