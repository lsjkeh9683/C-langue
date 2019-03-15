#include<stdio.h>
int main(void){
	int num;
	printf("정수를 계속 입력하시오 : ");
	while(num!=-1){
		scanf("%d",&num);
		if(num%3==0){
			printf("3의 배수는 몫 표시 : %d\n",num/3);
		}
		else{
		}
	} 
	return 0;
}
