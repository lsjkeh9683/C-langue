#include<stdio.h>
int main(void){ // �ƽ�Ű �ڵ� �����ʿ� A=65 
	int num,i,j,asci=65;
	printf("�ڿ����� �Է��Ͻÿ� : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=num;j>=i;j--){
			printf("%c", asci);
			asci++;
		}
		printf("\n");
	}
	return 0;
}
