#include<stdio.h>
int main(void){
	int num1=0,num2=0;
	int min=0,max=0;
	printf("�� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &num1, &num2);
	max = (num1>num2)?num1:num2;
	min = (num1<num2)?num1:num2;
	printf("%d",max-min);
	return 0;
}
