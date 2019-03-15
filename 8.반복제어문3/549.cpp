#include<stdio.h>
int main(void){
	int base=1, n=0,sum=0,count=0;
	printf("자연수 n을 입력하시오 : ");
	scanf("%d", &n);
	while(1){
		if(sum>=n){
			break;
		}
		sum+=base;
		base+=2;
		count++;
	}
	printf("sum : %d count : %d",sum,count);
	return 0;
}
