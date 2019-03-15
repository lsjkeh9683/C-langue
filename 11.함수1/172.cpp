#include<stdio.h>
void square(int num){
	int i,j,count=1;
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			printf("%d ",count++);
		}
		printf("\n");
	}
}
int main(void){
	int num;
	scanf("%d", &num);
	square(num);
	return 0;
}
