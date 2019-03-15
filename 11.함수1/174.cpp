#include<stdio.h>
int score(int a, int b, int c){
	return a+b+c;
}
int main(void){
	int check[4][4];
	int i,j;
 	for(i=0;i<3;i++){
  		for(j=0;j<3;j++){
   			scanf("%d", &check[i][j]);
  			check[i][3] = score(check[i][0], check[i][1], check[i][2]);
  		}
 	}	
 	for(i=0;i<4;i++){
 		check[3][i]=check[0][i]+check[1][i]+check[2][i];	
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d ",check[i][j]);
		}
		printf("\n");
	}
	return 0;
}
