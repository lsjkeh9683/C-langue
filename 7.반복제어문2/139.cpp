#include<stdio.h>
int main(void){
	int num1, num2, i, j;
	printf("���� �ΰ��� �Է��Ͻÿ� : "); 
	scanf("%d %d", &num1, &num2);
	
	if(num1>num2){
		for(i=1;i<=9;i++){
			for(j=num1;j>=num2;j--){
				printf("%d * %d = %3d   ", j, i, j*i);
			}
		printf("\n");
		}
	}
	else{
		for(i=1;i<=9;i++){
			for(j=num1;j<=num2;j++){
				printf("%d * %d = %3d   ", j, i, j*i);
			}
		printf("\n");
		}
	}
	return 0;
	
}

