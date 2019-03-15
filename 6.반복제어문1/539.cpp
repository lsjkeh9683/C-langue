#include<stdio.h>
int main(void){
	int num=0,count=0,sum=0;
	printf("정수를 계속 입력하시오: ");
	while(num<100){
		 scanf("%d", &num);
		 sum+=num;
		 count++;
	}
	printf("sum :%d\navg :%.1f",sum,(float)sum/count);
	return 0;
}
