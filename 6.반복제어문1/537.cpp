#include<stdio.h>
int main(void){
	int target=0;
	printf("100������ ���� ������ �Է��Ͻÿ�(�������ϱ� ����) : ");
	scanf("%d",&target);
	if(target<0||target>100){
		printf("error");
	}
	else{
		int base=1;
		int sum=0;
		while(base<=target){
			sum += base;
			base++;
		}
		printf("sum : %d",sum);
	}
	return 0;
} 
