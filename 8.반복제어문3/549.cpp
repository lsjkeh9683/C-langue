#include<stdio.h>
int main(void){
	int base=1, n=0,sum=0,count=0;
	printf("�ڿ��� n�� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	while(1){
		if(sum>=n){
			break;
		}
		sum+=base;
		base+=2;
		count++;
	}
	printf("sum : %d count : %d",sum,count);
	return 0;
}
