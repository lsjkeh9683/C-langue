#include<stdio.h>
int main(void){
	double num1,num2;
	printf("실수 2개를 입력하시오 : ");
	scanf("%lf %lf", &num1, &num2);
	printf("%d %d",(int)(num1*num2),(int)num1*(int)num2);
	return 0;
}
