#include<stdio.h>
int main(void){
	int num,i,j,k,su=1,asci=65;
	printf("�ڿ����� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	for(i=1;i<=num;i++){
		for(j=num;j>=i;j--){
			printf("%d ",su);
			su++;
		}
		for(k=1;k<=i;k++){
			printf("%c ",asci);
			asci++;
		}
		printf("\n");
	}
}
