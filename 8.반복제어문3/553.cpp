#include<stdio.h>
int main(void){ // 아스키 코드 참조필요 A=65 
	int num,i,j,asci=65;
	printf("자연수를 입력하시오 : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=num;j>=i;j--){
			printf("%c", asci);
			asci++;
		}
		printf("\n");
	}
	return 0;
}
