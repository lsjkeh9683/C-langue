#include<stdio.h>
int main(void){
	int num=0,sum=0;
	printf("100이하의 정수를 입력하시오 : ");
	scanf("%d", &num);
	int i;
	for(i=num;i<=100;i++){
		sum += i;
	}
	printf("sum : %d", sum);
	return 0;
} 
