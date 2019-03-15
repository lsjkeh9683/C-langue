#include<stdio.h>
int main(void){
	int i,j,k,num;
	
	printf("자연수를 입력하시오 : ");
	scanf("%d", &num);
	
	for(i=num;i>=1;i--){
		for(k=0;k<num-i;k++){
			printf(" ");
		}
		for(j=i;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
