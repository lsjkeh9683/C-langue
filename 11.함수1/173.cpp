#include<stdio.h>
int result(int num1,int num2){
	int res;
	if(num1>num2){
		res=num1*num1-num2*num2;
	}
	else if(num1<num2){
		res=num2*num2-num1*num1;
	}
	return res;
}
int main(void){
	int num1,num2;
	scanf("%d %d", &num1, &num2);
	printf("%d", result(num1,num2));
	return 0;
}
