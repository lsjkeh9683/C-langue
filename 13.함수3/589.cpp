#include<stdio.h>
int print(int n){
	if(n>0){
		return n+print(n-1);
	}
}
int main(void){
	int n;
	scanf("%d",&n);
	if(n>100){
	}
	printf("%d",print(n));
	return 0;
}
