#include<stdio.h>
int main(void){
	int base=1, num=0;
	printf("���� �Ѱ��� �Է��Ͻÿ�(1~���� ǥ��) : ");
	scanf("%d", &num);
	while(base<=num){
		printf("%d ",base);
		base++;
	}
	return 0;
}
