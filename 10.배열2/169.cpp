#include<stdio.h>
int main(void){
	char arr[3][5]={0,};
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			scanf(" %c",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			arr[i][j] += 32;
			printf("%c ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
