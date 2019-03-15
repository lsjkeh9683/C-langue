#include<stdio.h>
int main(void){
	int i=0,num=0;
	printf("정수를 히나 입력하시오(50이하 양수) : ");
	scanf("%d", &num);
	if(num>50){
	}
	else{
		for(i=2;i<=num;i+=2){
			printf("%d ", i);
		}
	}
	return 0;
}
