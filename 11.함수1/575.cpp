#include<stdio.h>
int result(int a, int b){
	int i, res=1;
	for(i=0;i<b;i++){
		res=res*a;
	}
	return res;
}
int main(void){
	int num1,num2;
	scanf("%d %d", &num1, &num2);
	if(num1>10||num2>10){
		return 0;
	}
	printf("%d", result(num1,num2));
	return 0;
}
