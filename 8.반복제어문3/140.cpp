#include<stdio.h>
int main(void){
	int num=0,count=0,sum=0;
	printf("정수를 입력하시오 : ");
	while(1){
		scanf("%d",&num);
		count++;
		if(count>20 || num == 0){
			count-=1;
			break;
		}
		else{
			sum+=num;	
		}
		
	}
	printf("sum : %d avg : %.d",sum,(int)sum/count);
	return 0;
}
