#include<stdio.h>
int main(void){
	int num1,num2,num3;
	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	int sum=num1+num2+num3;
	printf("��� : %.1f", (float)sum/3);
	return 0;
}
