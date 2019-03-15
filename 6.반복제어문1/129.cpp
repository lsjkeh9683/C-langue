#include<stdio.h>
int main(void){
	int width=0,height=0;
	char checksum;
	while(1){
		printf("Base = ");
		scanf("%d", &width);
		printf("Height = ");
		scanf("%d", &height);
		printf("Triangle width = %.1f",width*height*0.5);
		printf("\nContinue? ");
		scanf(" %c",&checksum);
		if(checksum == 'Y'||checksum == 'y'){
		}
		else{
			break;
		}
	}
	return 0;	
} 
