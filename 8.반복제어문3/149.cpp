#include<stdio.h>
int main(void){
	int i,j,num,k[5]={1,3,5,7,9},l;
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=0;j<num;j++){
			printf("%d ",k[l]);
			l++;
			if(l>4){
				l=0;
			}
		}
		printf("\n");
	}
	return 0;
}
