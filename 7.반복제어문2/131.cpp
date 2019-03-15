#include<stdio.h>
int main(void){
	int num1,num2,min,max;
	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d",&num1,&num2);
	min = (num1<num2)?num1:num2;
	max = (num1>num2)?num1:num2;
	int i;
	for(i=min;i<=max;i++){
		printf("%d ", i);
	}
	return 0;
}
