#include<stdio.h>
int main(void){
	int i,j,num;
	printf("자연수를 입력하시오 : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
