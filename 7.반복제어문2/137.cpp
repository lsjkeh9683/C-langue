#include<stdio.h>
int main(void){
	int num1,num2;
	printf("���� 2���� �Է��Ͻÿ� : ");
	scanf("%d %d",&num1,&num2);
	int i,j;
	for(i=1;i<=num1;i++){
		for(j=1;j<=num2;j++){
			printf("%d",i*j);
		}
		printf("\n");
	}
	return 0;
}
