#include<stdio.h>
int main(void){
	int num[20]={0,}, i, input;
	scanf("%d", &input);
	num[0]=100;
	num[1]=input;
	printf("%d %d ",num[0],num[1]);
	for(i=2;i<20;i++){
		num[i]=num[i-2]-num[i-1];
		printf("%d ",num[i]);
		if(num[i]<0){
			break;
		}
	}
	return 0;
}
