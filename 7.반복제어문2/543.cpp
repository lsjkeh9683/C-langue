#include<stdio.h>
int main(void){
	int i=0,num=0;
	printf("������ ���� �Է��Ͻÿ�(50���� ���) : ");
	scanf("%d", &num);
	if(num>50){
	}
	else{
		for(i=2;i<=num;i+=2){
			printf("%d ", i);
		}
	}
	return 0;
}
