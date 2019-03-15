#include<stdio.h>
void res(int a, char b, int c){
	if(b == '+'){
		printf("%d + %d = %d",a,c,a+c);
	}
	else if(b=='-'){
		printf("%d - %d = %d",a,c,a-c);
	}
	else if(b=='*'){
		printf("%d * %d = %d",a,c,a*c);
	}
	else if(b=='/'){
		printf("%d / %d = %d",a,c,a/c);
	}
	else{
		printf("0");
	}
}
int main(void){
	int num1,num2;
	char giho;
	scanf("%d %c %d",&num1,&giho,&num2);
	res(num1,giho,num2);
	return 0;
}
