#include<stdio.h>
int main(void){
	int wei=0,hei=0;
	printf("Ű�� �����Ը� �Է��Ͻÿ� : ");
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
