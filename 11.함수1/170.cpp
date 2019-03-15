#include<stdio.h>
void str(int c){
	printf("@@@@@@@@@@\n");
}
int main(void){
	int c;
	printf("first\n");
	str(c);
	printf("second\n");
	str(c);
	printf("third\n");
	str(c);
	return 0;
}
