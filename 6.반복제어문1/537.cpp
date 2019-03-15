#include<stdio.h>
int main(void){
	int target=0;
	printf("100이하의 양의 정수를 입력하시오(누적더하기 연산) : ");
	scanf("%d",&target);
	if(target<0||target>100){
		printf("error");
	}
	else{
		int base=1;
		int sum=0;
		while(base<=target){
			sum += base;
			base++;
		}
		printf("sum : %d",sum);
	}
	return 0;
} 
