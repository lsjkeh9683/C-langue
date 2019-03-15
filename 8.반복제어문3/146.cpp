#include<stdio.h>
int main(void){
	int num,asci=65,k=0;
	scanf("%d",&num);
	int i,j;
	for(i=0;i<num;i++){
		for(j=0;j<num-i;j++){
			printf("%c ",asci);
			asci++;
		}
		for(j=0;j<i;j++){
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
	return 0;
}
