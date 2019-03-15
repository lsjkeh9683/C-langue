#include<stdio.h>
int main(void){
	int n=33;
	while(n>=33&&n<=127){
		printf("ASCII code =? ");
		scanf("%d",&n);
		printf("%c\n",n);
	}
	return 0;
}
