#include<stdio.h>
int main(void){
	int score[5][4]={0,};
	int i, j, sum, count=0;
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			scanf("%d",&score[i][j]);
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			sum+=score[i][j];			
		}
		if(sum/4>=80){
			printf("pass\n");
			count++;
		}
		else{
			printf("fail\n");
		}
		sum=0;
	}
	printf("Successful : %d", count);
	return 0;
	
}
