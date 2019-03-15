#include<stdio.h>
int main(void){
	int year;
	printf("연도를 입력하시오 : ");
	scanf("%d", &year);
	if(year%400==0||(year%4==0&&year%100!=0)){
		printf("leap year"); //윤년 
	}
	else{
		printf("common year"); //평년 
	}
	return 0; 
}
