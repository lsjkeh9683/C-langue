#include<stdio.h>
int main(void){
	int num=0,sum=0;
	printf("100������ ������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	int i;
	for(i=num;i<=100;i++){
		sum += i;
	}
	printf("sum : %d", sum);
	return 0;
} 
