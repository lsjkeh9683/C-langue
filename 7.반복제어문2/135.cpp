#include<stdio.h>
int main(void){
	int num1=0,num2=0,i=0,count=0,sum=0;
	printf("정수 2개를 입력하시오 : ");
	scanf("%d %d",&num1,&num2);
	for(i=num1;i<=num2;i++){
		if(i%3==0||i%5==0){
			sum+=i;
			count++;
		}
		else{
		}
	
	}
	printf("sum : %d\n",sum);
	printf("avg : %.1f",(float)sum/count);
	return 0;
}
