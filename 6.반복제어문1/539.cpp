#include<stdio.h>
int main(void){
	int num=0,count=0,sum=0;
	printf("������ ��� �Է��Ͻÿ�: ");
	while(num<100){
		 scanf("%d", &num);
		 sum+=num;
		 count++;
	}
	printf("sum :%d\navg :%.1f",sum,(float)sum/count);
	return 0;
}
