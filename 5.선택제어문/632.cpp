#include<stdio.h>
int main(void){
	int num1=0,num2=0,num3=0;
	printf("���� 3���� �Է��Ͻÿ� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	int min = (num1<num2)?num1:num2;
	min = (min<num3)?min:num3;
	printf("%d",min);
	return 0;
}
