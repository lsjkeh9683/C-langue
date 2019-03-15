#include<stdio.h>
void gugudan(int a, int b){
	int i,j;
	if(a<b){
		for(i=a;i<=b;i++){
			printf("== %ddan ==\n",i);
			for(j=1;j<=9;j++){
				printf("%d * %d = %d\n",i,j,i*j);
			}
			printf("\n");
		}
	}
	else if(a>b){
		for(i=b;i<=a;i++){
			printf("== %ddan ==\n",i);
			for(j=1;j<=9;j++){
				printf("%d * %d = %d\n",i,j,i*j);
			}
			printf("\n");
		}
	}
}
int main(void){
	int num1,num2;
	scanf("%d %d", &num1,&num2);
	gugudan(num1,num2);
	return 0;
}
