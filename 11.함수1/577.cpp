#include<stdio.h>
void cal(int *a,int *b){
	if(*a>*b){
		*a=*a/2;
		*b=*b*2;
	}
	else if(*a<*b){
		*a=*a*2;
		*b=*b/2;
	}
	printf("%d %d",*a,*b);
}
int main (void){
	int num1,num2;
	scanf("%d %d", &num1, &num2);
	cal(&num1,&num2);
	return 0;
}
