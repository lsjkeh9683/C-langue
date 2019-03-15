#include<stdio.h>
int main(void){
	int num1,num2,num3;
	printf("3과목 점수를 입력하시오 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	int sum=num1+num2+num3;
	printf("평균 : %.1f", (float)sum/3);
	return 0;
}
