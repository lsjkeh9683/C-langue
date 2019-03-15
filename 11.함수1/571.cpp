#include<stdio.h>
void printstr(void){
	printf("~!@#$^&*()_+|\n");
}
int main(void){
	int num,i;
	scanf("%d",&num);
	for(i=1;i<=3;i++){
		printstr();
	}
	return 0;
}
