#include<stdio.h>
int main(void){
	int i=0,num=0;
	printf("자연수 하나를 입력하시오 : "); 
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		printf("%d ",num*i);
	}
	return 0;
}
