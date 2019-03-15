#include<stdio.h>
int main(void){
	float num1;
	printf("평점을 입력하시오(0~4.0) : ");
	scanf("%f",&num1);
	switch((int)num1){
		case 4:
			printf("scholarship");break;
		case 3:
			printf("next semester");break;
		case 2:
			printf("seasonal semester");break;
		default:
			printf("retake");break;	
	}
	return 0;
}
