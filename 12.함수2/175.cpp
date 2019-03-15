#include<stdio.h>
void pass3(int arr[],int count){
	int i,j,temp;
	for(i=0;i<count;i++){
		for(j=0;j<count-1;j++){
			if(arr[j]<arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<count;i++){
		printf("%d ",arr[i]);
	}
}
void pass2(int num1){
	int arr[15],count=0;
	int i;
	for(i=0;i<num1;i++){
		scanf("%d",&arr[i]);
		count++;
	}
	pass3(arr,count);
}

void pass (int num1){
	scanf("%d",&num1);
	if(num1>=1&&num1<=15){
		pass2(num1);
	}
	else{

	}
}
int main(void){
	int num1=0;
	pass(num1);
	return 0;
}
