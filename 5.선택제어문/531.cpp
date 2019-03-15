#include<stdio.h>
int main(void){
	float wei;
	printf("체중을 입력하시오 : ");
	scanf("%f",&wei);
	if(50.80>=wei){
		printf("Flyweight");
	}
	else if(61.23>=wei){
		printf("Lightweight");
	}
	else if(72.57>=wei){
		printf("Middleweight");
	}
	else if(88.45>=wei){
		printf("Cruiserweight");
	}
	else{
		printf("Heavyweight");
	}
	return 0;
}
