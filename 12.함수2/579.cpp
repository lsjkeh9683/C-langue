#include<stdio.h>
void result(int arr[],int num){
	int i,j,temp;
	for(i=0;i<num;i++){
		for(j=0;j<num-1;j++){
			if(arr[j]<arr[j+1]){
				temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main(void){
	int arr[10]={0,};
	int num;
	scanf("%d", &num);
	int i;
	for(i=0;i<num;i++){
		scanf("%d", &arr[i]);
	}
	result(arr,num);
	for(i=0;i<num;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
