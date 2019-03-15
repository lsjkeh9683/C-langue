#include<stdio.h>
#include<math.h>
int main(void){
	int arr[5]={0,};
	int i,sum=0;
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		arr[i]=abs(arr[i]);
		sum+=arr[i];
	}
	printf("%d",sum);
	return 0;

}
