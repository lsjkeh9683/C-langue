#include<stdio.h>
int main(void){
	float num1,num2;
	printf("�ΰ��� ������ �Է��Ͻÿ� : ");
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
