#include<stdio.h>
int main(void){
	double num1,num2;
	printf("�Ǽ� 2���� �Է��Ͻÿ� : ");
	scanf("%lf %lf", &num1, &num2);
	printf("%d %d",(int)(num1*num2),(int)num1*(int)num2);
	return 0;
}
