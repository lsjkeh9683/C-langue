#include<stdio.h>
int main(void){
	int arr[5][5]={{1,0,1,0,1},};
	int i,j;
	for(i=1;i<5;i++){
		for(j=0;j<5;j++){
			if(j==0){
    			arr[i][j] = arr[i-1][j+1];
    		}	
   			else if(j==4){
    			arr[i][j] = arr[i-1][j-1];
   			}
			else{
    			arr[i][j] = arr[i-1][j-1]+arr[i-1][j+1];
			}
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
