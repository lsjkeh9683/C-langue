#include<stdio.h>
int main(void){
	int count,num,sum;
	printf("과목수 입력 : ");
	scanf("%d",&count);
	if(count>10){
		printf("error");
		return 0;
	} 
	int i;
	for(i=1;i<=count;i++){
		scanf("%d",&num);
		sum+=num;
	}
	printf("avg : %.1f\n",(float)sum/count);
	if((float)sum/count>=80){
		printf("pass");
	}
	else{
		printf("fail");
	}
	return 0;
}
