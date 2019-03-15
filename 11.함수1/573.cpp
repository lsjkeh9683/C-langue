#include<stdio.h>
void result(int num){
	int i,j,count=1;
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			printf("%d ",count);
			count++;
		}
		printf("\n");
	}
}
int main(void){
	int num;
	scanf("%d",&num);
	if(num>=100){
		return 0;
	}
	result(num);
	return 0;
}
