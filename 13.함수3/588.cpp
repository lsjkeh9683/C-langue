#include<stdio.h>
void print(int n){
	if(n==0){
		return;
	}
	printf("%d ",n);
	print(--n);
}
int main(void){
	int n;
	scanf("%d",&n);
	if(n>50){
	}
	print(n);
	return 0;
} 
