#include <stdio.h>
int cmp(int a, int b){
	int max = a>b?a:b;
	return max;
}
void cmp_f(int a,int b,int c){
	int max;
	cmp(a,b);
	cmp(max,c);
	printf("%d ", max);
}
int main(void){
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	cmp(num1,num2);
	cmp_f(num1,num2,num3);
	return 0;
}
