#include<stdio.h>
int main(void){
	int num=0;
	
	while(1){
		printf("number? : ");
		scanf("%d",&num);
		if(num>0){
			printf("positive integer\n");
		}
		else if(num<0){
			printf("negative number\n");
		}
		else{
			break;
		}
	} 
	return 0;
}
