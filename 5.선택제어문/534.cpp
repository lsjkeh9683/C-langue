#include<stdio.h>
int main(void){
	char str;
	printf("���ڸ� �Է��Ͻÿ�(A~F) : ");
	scanf("%c", &str);
	switch(str){
		case 'A':
			printf("Excellent");break;
		case 'B':
			printf("Good");break;
		case 'C':
			printf("Usually");break;
		case 'D':
			printf("Effort");break;
		case 'F':
			printf("Failure");break;
		default: 
			printf("error");break;
	} 
	return 0;
}
