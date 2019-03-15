#include<stdio.h>
int main(void){
	int wei=0,hei=0;
	printf("키와 몸무게를 입력하시오 : ");
	scanf("%d %d", &hei,&wei);
	int result = wei + 100 - hei;
	if(result>0){
		printf("%d\nObesity",result);
	}
	else{
		printf("%d\nno Obesity",result);
	}
	return 0;
} 
