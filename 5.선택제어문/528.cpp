#include<stdio.h>
int main(void) {
	int num=0;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);

	if (num < 0) {
		printf("%d\nminus", num);
	}
	else {
		printf("%d", num);
	}
	return 0;
}
