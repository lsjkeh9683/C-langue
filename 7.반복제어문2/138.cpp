#include<stdio.h>
int main(void){
	int i,j,num;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	for(i=1;i<=num;i++){
		for(j=1;j<=num;j++){
			printf("(%d, %d) ",i,j);
		}
		printf("\n");
	}
	return 0;
}
