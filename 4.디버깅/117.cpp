#include<stdio.h>
int main(void){
	float num1,num2,num3;
	printf("실수형 3과목 점수를 입력하시오 : ");
	scanf("%f %f %f", &num1, &num2, &num3);
	printf("sum : %d\n",(int)num1+(int)num2+(int)num3);
	float sum=num1+num2+num3;
	printf("avg : %d",(int)sum/3);
	return 0;
}
