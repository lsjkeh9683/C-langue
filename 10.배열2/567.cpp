#include<stdio.h>
int main(void){
	int num[15]={5, 8, 10, 6, 4, 11, 20, 1, 13, 2, 7, 9, 14, 22, 3};
	int i,j,count=0;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("%2d   ", num[count]);
			count++;
		}
		printf("\n");
	}
	return 0;
}
