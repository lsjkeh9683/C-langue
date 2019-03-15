#include<stdio.h>
void print(int n){
	if(n==0){
		return;
	}
	printf("recursive\n");
	print(--n);	
		
}
int main(void){
	int n;
	scanf("%d",&n);
	if(n>20){
	}
	print(n);
	return 0;
}
