#include<stdio.h>
int main(void){
	int num;
	while(1){
		printf("1. Korea\n2. USA\n3.Japan\n4. China\n number? : ");
		scanf("%d", &num);
		if(num<1||num>4){
			printf("\n\nnone\n\n"); break;
		}
		else{
			switch(num){
				case 1 :
					printf("\n\nSeoul\n\n\n"); break;
				case 2 :
					printf("\n\nWashington\n\n\n"); break;
				case 3 :
					printf("\n\nTokyo\n\n\n"); break;
				case 4 :
					printf("\n\nBeijing\n\n\n"); break;
				default : 
					break;
			}
			
		}
	}
	return 0;
}
