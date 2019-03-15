#include<stdio.h>
int main(void){
	int base=1, num=0;
	printf("정수 한개를 입력하시오(1~누적 표시) : ");
	scanf("%d", &num);
	while(base<=num){
		printf("%d ",base);
		base++;
	}
	return 0;
}
