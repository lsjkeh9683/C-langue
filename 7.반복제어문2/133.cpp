#include<stdio.h>
int main(void){
    int count=0, num=0, i=0, sum=0;
	printf("������ �Է��Ͻÿ� : ");
    scanf("%d",&count);
    printf("%d���� ������ �Է��Ͻÿ� : ",count); 
    for(i=1 ; i<=count ; i++){
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("%.2f",(float)sum/count);
    return 0;
}
