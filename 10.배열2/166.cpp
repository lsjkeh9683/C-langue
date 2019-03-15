#include<stdio.h>
int main(void){
	int f_arr[2][3]={0,};
	int s_arr[2][3]={0,};
	int mul_arr[2][3]={0,};
	int i,j;
	printf("first array\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&f_arr[i][j]);
		}
	}
	printf("secound array\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&s_arr[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			mul_arr[i][j] = f_arr[i][j] * s_arr[i][j];
			printf("%d ",mul_arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
