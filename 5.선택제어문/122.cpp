#include<stdio.h>
int main(void){
	int year;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &year);
	if(year%400==0||(year%4==0&&year%100!=0)){
		printf("leap year"); //���� 
	}
	else{
		printf("common year"); //��� 
	}
	return 0; 
}
