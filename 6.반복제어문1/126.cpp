#include<stdio.h>
int main(void){
	int num=0, o_count=0, e_count=0;
	printf("������ ��� �Է��Ͻÿ� : ");
	while(1){
		scanf("%d",&num);
		if(num==0){
			break;
		}
		else{
			if(num%2!=0){
				o_count++;
			}
			else{
				e_count++;
			}
			
		}
	}
	printf("odd : %d\neven : %d",o_count,e_count);
	return 0;
}
