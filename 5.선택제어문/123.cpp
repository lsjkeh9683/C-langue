#include<stdio.h>
int main(void){
	int num;
	printf("���ڸ� �Է��Ͻÿ�(1~3) : ");
	scanf("%d",&num);
	switch(num){
		case 1:
		printf("dog");break;
		case 2:
		printf("cat");break;
		case 3:
		printf("chick");break;
		default:
			printf("I don't know");break;
	}
	return 0;
}
