#include<stdio.h>
int main(void){
	int arr[10];
 	int i;
	scanf("%d %d", &arr[0], &arr[1]);
 	for(i=0;i<8;i++){
  		arr[i+2]=(arr[i]+arr[i+1])%10;
  	}
 	for (i=0;i<10;i++){
  		printf("%d ", arr[i]);
	}
	return 0;
}
