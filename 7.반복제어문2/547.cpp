#include<stdio.h>
int main(void){
	int i,j;
	for(i=2;i<=6;i++){
		for(j=i;j<=i+4;j++){
			printf("%d ",j);
			}
		printf("\n");
	}
	return 0;
}
