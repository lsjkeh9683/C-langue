#include<stdio.h>
int main(void){
	int num1=0,num2=0,i=0,count=0,sum=0;
	printf("���� 2���� �Է��Ͻÿ� : ");
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
