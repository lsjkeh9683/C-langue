#include<stdio.h>
int main(void){
	int num,sum;
	printf("정수 하나를 입력하시오 : ");
	scanf("%d", &num);
	int i;
	for(i=1;i<=num;i++){
		if(i%5==0){
			sum+=i;
		}
	}
	printf("sum : %d", sum);
	return 0;
}
