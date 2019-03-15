#include<stdio.h>
int main(void){
	int arr[100]={0,};
	int i,input;
	for(i=0;i<10;i++){
		scanf("%d", &input);
		if(input<0||input>100||input==0){
			break;
		}
		arr[input/10]++;
	}
	for(i=10;i>0;i--){
		if(arr[i]>0){
			printf("%d : %d person\n",i*10,arr[i]);
		}
	}
	return 0;
}
