#include<stdio.h>
#define num 7
int main(void){
	int arr[num]={0,};
	int i,j;
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	for(i=num-1;i>=num-3;i--){
		for(j=0;j<num-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<num;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
