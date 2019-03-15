#include<stdio.h>
int main(void){
	int arr[10]={0,};
	int input;
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&input);
		if(input<1||input>6){
			return 0;
		}
		arr[input-1]++;
	}
	for(i=1;i<7;i++){
		printf("%d : %d\n", i, arr[i-1]);
	}
	return 0;
}
