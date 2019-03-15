#include<stdio.h>
void plus(int num){
	int i,sum=0;
	for(i=1;i<=num;i++){
		sum+=i;
	}
	printf("%d",sum);
}
int main(void){
	int num;
	scanf("%d",&num);
	if(num>1000){
		return 0;
	}
	plus(num);
	return 0;
}
