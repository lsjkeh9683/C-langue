#include<stdio.h>
int main(void){
	int i,j,num;
	printf("�ڿ����� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=num-1;i++){
		for(j=1;j<=num-i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
