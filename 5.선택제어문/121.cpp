#include<stdio.h>
int main(void){
	int num;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	if(num==0){
		printf("zero");
	}
	else if(num>0){
		printf("plus");
	}
	else{
		printf("minus");
	}
	return 0;
}
