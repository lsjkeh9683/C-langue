#include<stdio.h>
void pass(int arr[],int count){
	int i,j,k,temp;
	for(i=0;i<count;i++){
		for(j=0;j<count-1;j++){
			if(arr[j]<arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		for(k=0;k<count;k++){
		printf("%d ",arr[k]);
	}
	printf("\n");
	}
	
}
int main(void){
	int arr[10]={0,};
	int i,j,count=0;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		count++;
	}
	pass(arr,count);
	return 0;
}
