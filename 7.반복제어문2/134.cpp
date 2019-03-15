#include<stdio.h>
int main(void){
	int i=0,num=0,even=0,odd=0;
	for(i=1;i<=10;i++){
		scanf("%d",&num);
		if(num%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	printf("\neven : %d",even);
	printf("\nodd : %d",odd);
	return 0;
}
