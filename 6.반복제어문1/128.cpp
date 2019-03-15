#include<stdio.h>
int main(void){
	int num,count;
	printf("정수를 입력하시오 : ");
	while(num!=0){
		scanf("%d",&num);
		if(num%3==0||num%5==0){
		}
		else{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
