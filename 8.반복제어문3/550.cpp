#include<stdio.h>
int main(void){
	int num,i,j;
	printf("�ڿ����� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	for(i=num;i>=1;i--){
		for(j=i;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
