#include<stdio.h>
int main(void){
	int num1,num2,min,max;
	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf("%d %d",&num1,&num2);
	min = (num1<num2)?num1:num2;
	max = (num1>num2)?num1:num2;
	int i;
	for(i=min;i<=max;i++){
		printf("%d ", i);
	}
	return 0;
}
