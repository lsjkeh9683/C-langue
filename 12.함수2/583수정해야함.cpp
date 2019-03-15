#include<stdio.h>
void formula(double arr[], int count){
	int i,j;
	double temp;
	for(i=0;i<count;i++){
		for(j=0;j<count-1;j++){
				if(arr[i]<arr[i+1]){
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
	for(i=0;i<3;i++){
		printf("%.0lf ",arr[i]);
	}
}
int main(void){
	double arr[3]={0,};
	int i;
	for(i=0;i<3;i++){
		scanf("%lf",&arr[i]);
	}
	formula(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;
}
