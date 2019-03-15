#include<stdio.h>
int main(void){
	int f_arr[2][4]={0,};
	int s_arr[2][4]={0,};
	int i,j;
	printf("first array\n");
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			scanf("%d",&f_arr[i][j]);
		}
	}
	printf("second array\n");
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			scanf("%d",&s_arr[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			printf("%d ",f_arr[i][j]*s_arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
