#include<stdio.h>
int main(void){
	float wei;
	printf("ü���� �Է��Ͻÿ� : ");
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
